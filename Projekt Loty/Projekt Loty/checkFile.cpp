#include "stdafx.h"
#include "checkFile.h"


bool fileCheck(std::string & fileExample)
{
	std::ifstream inputFileName(fileExample);
	if (inputFileName)
	{
		return true;
	}
	else
		std::cout << "nie ma pliku" << std::endl;
	return 0;
}