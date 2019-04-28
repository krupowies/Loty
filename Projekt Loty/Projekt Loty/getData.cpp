#include "stdafx.h"
#include "getData.h"

void addPassenger(passenger *& pHead, std::string & name, int seat)
{
	if (pHead == nullptr)
	{
		pHead = new passenger{ name,seat, nullptr };
	}
	else
	{
		passenger *temp = pHead;
		if (seat < temp->seat)
		{
			passenger * newTemp = new passenger{ name, seat, pHead };
			pHead = newTemp;
		}
		else
		{
			while ((temp->pNext != nullptr) && !(seat < temp->seat && seat > temp->seat))
				temp = temp->pNext;
			if (temp->pNext == nullptr)
				temp->pNext = new passenger{name, seat, nullptr};
				else
				{
					passenger * newTemp = new passenger{ name, seat, temp->pNext };
					temp->pNext = newTemp;
				}
		}
	}
}

flight * findFlight(flight * &pHead, std::string & wantedID, std::string & wantedCity, std::string & wantedDate)
{
	if (pHead == nullptr)
	{
		return pHead = new flight{ wantedID, wantedCity, wantedDate, nullptr, nullptr };
	}
	else
	{
		if (pHead->ID == wantedID)
			return pHead;
		else
			return findFlight(pHead->pNext, wantedID, wantedCity, wantedDate);
	}
}

bool getData(std::string & inputFileName, flight *& pHead)
{
	bool file = false;
	std::ifstream inputFile(inputFileName);
	if (inputFile)
	{
		file = true;
		flight * wantedFlight = nullptr;
		std::ifstream inputFile(inputFileName);
		while (!inputFile.eof())
		{
			std::string ID = "";
			std::string city = "";
			std::string date = "";
			std::string name = "";
			int seat = 0;

			inputFile >> ID;
			inputFile >> city;
			inputFile >> date;
			inputFile >> name;
			inputFile >> seat;

			wantedFlight = findFlight(pHead, ID, city, date);
			addPassenger(wantedFlight->pPassengers, name, seat);
		}
		inputFile.close();
	}
	return file;
}
