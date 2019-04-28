#include "stdafx.h"
#include "createOutput.h"

void createPassenger(passenger * pHead, std::ofstream & file)
{
	if (pHead)
	{
		passenger * current = pHead;
		while (current)
		{
			file << std::endl << std::setw(3);
			file << current->seat << " ";
			file << current->name << std::setw(5);
			current = current->pNext;	
		}
	}
}

int countPassengers(passenger * pHead)
{
	int counter = 0;
	if (pHead)
		counter = countPassengers(pHead->pNext) + 1;

	return counter;
}

void outPut(flight * pHead)
{
	if (pHead)
	{
		auto current = pHead;
		while (current)
		{
			std::string outPutFileName = current->ID + ".txt";
			std::ofstream outPutFile(outPutFileName);
			outPutFile << "flight ID : " << current->ID << std::endl;
			outPutFile << "Airport : " << current->city << std::endl;
			outPutFile << "Date : " << current->date;
			outPutFile << std::endl;
			outPutFile << "Passengers :";
			createPassenger(current->pPassengers, outPutFile);
			outPutFile << std::endl;
			outPutFile << "Number of passengers " << countPassengers(current->pPassengers);
			current = current->pNext;
			outPutFile.close();
		}

	}
}
