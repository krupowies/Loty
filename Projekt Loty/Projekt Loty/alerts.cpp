#include "stdafx.h"
#include "alerts.h"



void Help()
{
	std::cout << "Witaj w programie Loty. " << std::endl;
	std::cout << "wprowdz poprowane dane wedlug schematu " << std::endl;
	std::cout << "SCHEMAT: Loty.exe -i *nazwa pliku wejsciowego*.txt " << std::endl;
}

void Error()
{
	std::cout << "Cos poszlo nie tak, pamietaj o poprawnym formacie danych wejsciowych " << std::endl;
}