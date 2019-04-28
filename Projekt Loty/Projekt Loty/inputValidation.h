#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H
#include <string>
#include "alerts.h"
#include <iostream>
#include "stdafx.h"

/**Funkcja sprawdza czy podane przez uzytkownika parametry s¹ poprawne, 
*@param argc ilosc argumentow 
*@param argv przekazane argumenty 
*@param fileName 
*@return correct wartosc boolowska zwracajaca true gdy parametry wejsciowe sa poprawne, false gdy sa bledne
*/

bool checkInput(int argc, char ** argv, std::string & fileName);


#endif