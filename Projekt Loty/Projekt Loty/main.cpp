#include "stdafx.h"
#include <iostream>
#include <string>
#include "alerts.h"
#include "inputValidation.h"
#include "structures.h"
#include "getData.h"
#include "checkFile.h"
#include "createOutput.h"
#include "clear.h"
//#include "vld.h" tym sprawdzalem wycieki pamieci

int main(int argc, char ** argv)
{
	std::string inputFileName = "";

	if (checkInput(argc, argv, inputFileName))
	{
		if (fileCheck(inputFileName))
		{
			if (!inputFileName.empty())
			{
				flight *flight = 0;
				if (getData(inputFileName, flight))
				{
					outPut(flight);
				}
				std::cout << "Pliki zostaly stworzone ..." << std::endl;
				clearAll(flight);
			}
		}
	}
	
    return 0;
}