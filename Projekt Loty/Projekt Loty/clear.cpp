#include "stdafx.h"
#include"clear.h"




void clearList(passenger *& pHead)
{
	while (pHead)
	{
		auto current = pHead;
		pHead = pHead->pNext;
		delete current;
	}

}

void clearAll(flight *& pHead)
{
	while (pHead)
	{
		clearList(pHead->pPassengers);
		auto current = pHead;
		pHead = pHead->pNext;
		delete current;
	}
}