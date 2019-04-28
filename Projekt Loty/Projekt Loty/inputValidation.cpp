#include "stdafx.h"
#include <string>
#include "inputValidation.h"
#include "alerts.h"
#include "stdafx.h"

bool checkInput(int argc, char ** argv, std::string & fileName)
{
	bool correct = true;
	for (int i = 1; i < argc; i++)
	{
		if (std::string(argv[i]) == "-i" || std::string(argv[i]) == "-I")
		{
			fileName = std::string(argv[i + 1]);
			return correct;
		}
		else if (std::string(argv[i]) == std::string("-h"))
			Help();
		else if (std::string(argv[i]) != "-h" || std::string(argv[i]) != "-i")
		{
			Error();
			correct = false;
			return correct;
		}
	}
	return 0;
}