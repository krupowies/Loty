#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <iostream>
#include <string>
/**Struktura : element posortowanej listy jednokierunnkowej opisujaca pasazera
*@param name nazwisko pasazera
*@param seat numer miejsca wedlug ktorego sortujemy pasazerow
*@param pNext to wskaznik na nastepny element listy
*/

struct passenger
{
	std::string name;
	int seat;
	passenger *pNext;

};

/**Struktura : element listy jednokierunkowej opisujacy lot.
*@param ID numer identyfikacyjny lotu 
*@param city lotnisko startowe samolotu
*@param date data wylotu 
*@param pPassengers wsakznik na liste pasazerow
*@param pNext wskaznik na nastepny element listy
*/

struct flight
{
	std::string ID;
	std::string city;
	std::string date;
	passenger *pPassengers;
	flight *pNext;
};

#endif

