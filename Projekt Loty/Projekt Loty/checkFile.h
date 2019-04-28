#ifndef CHECKFILE_H
#define CHECKFILE_H
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

/** Funckja sprawdza czy podany plik istnieje zanim zaczniemy 
*wykonyuwaæ na nim jakiekolwiek operacje.
*@param fileExample nazwa pliku
*@return wartosc boolowska, false gdy plik nie istniej, true gdy istnieje
*/

bool fileCheck(std::string & fileExample); //sprawdzenie pliku

#endif
