#ifndef CREATEOUTPUT_H
#define CREATOUTPUT_H

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "structures.h"


/**Funkcja tworzaca pasazerow w pliku wyjsciowym
* @param pHead wskaznik na pierwszy element listy pasazerow
* @param file to strumien wyjsciowy z pliku 
*/
void createPassenger(passenger * pHead, std::ofstream & file);

/** Funkcja zlizajaca ilosc pasazerow w locie 
* @param pHead wskaznik na pierwszy element listy pasazerow
* @return counter policzona ilosc pasazerow
*/
int countPassengers(passenger * pHead);

/**Funkcja tworzaca plik wyjsciowy
*@param pHead wsakznik na pierwszy element listy lotow
*/
void outPut(flight * pHead);



#endif
