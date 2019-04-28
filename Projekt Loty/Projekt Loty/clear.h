#ifndef CLEARALL_H
#define CLEARALL_H
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "structures.h"

/** Funkcja usuwa wszystkie elemnty z listy pasazerow
*@param pHead wskaznik na glowe listy pasazerow
*/

void clearList(passenger *& pHead); 

/** Funkcja usuwa wszystkie elemnty z listy lotow 
*@param pHead wskaznik na glowe listy lotow
*/

void clearAll(flight *& pHead); 

#endif
