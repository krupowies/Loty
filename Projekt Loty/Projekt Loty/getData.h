#ifndef GETDATA_H
#define GETDATA_H

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include "structures.h"

/**Funkcja dodajaca pasazera do listy w sposob posortowany 
*@param pHead wskaznik na pierwszy element listy pasazerow 
*@param name imie pasazera ktorego chcemy dodac do listy 
*@param numer miejsca pasazera wedlug ktorego sortujemy pasazerow lotu
*/
void addPassenger(passenger * &pHead, std::string & name, int seat);

/**Funkcja znajduje w liscie lot o zadanych cechach  
*@param pHead wskaznik na pierwszy element listy lotow
*@param ID njumer identyfikacyjny lotu ktory chcemy znalezc
*@param city lotnisko startowe lotu ktory chcemy zalezc 
*@param date termin lotu ktory chcemy znalezc
*@return kiedy lot istnieje/zostal znaleziony to zwracany jest jego adres, kiedy lot nie istnieje to dodajemy go na koniec listy i zwracamy jego adres
*/

flight *findFlight(flight *&pHead, std::string & ID, std::string & city, std::string & date);

/**Funkcja pobiera dane z pliku wejsciowego 
/*@ inputFileName nazwa pliku wejsciowego
/*@ pHead wskaznik na pierwszy element listy lotow
/*@	file zwraca true gdy odczyt z pliku byl mozliwy, zwraca false gdy plik nieistnieje lub odczyt z pliku nie byl mozliwy
*/
bool getData(std::string & inputFileName, flight *& pHead);


#endif