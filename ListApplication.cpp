// ListApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "list.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
List L;

L.Insert (10); L.Insert (15); L.Insert (20);
L.ShowData ();
L.Delete (15); 
L.ShowData ();
L.Insert(30); L.Insert(50); L.Delete (10); 
L.ShowData (); 
//Add two new numbers to the list
L.Insert(45); L.Insert(16);
//Delete a number from the list
L.Delete (45); 
//Display the current list 
L.ShowData (); 


//List S;
//
//S.Insert ("musa"); S.Insert ("lucky"); S.Insert ("james");
//S.ShowData ();
//S.Delete ("james"); 
//S.ShowData ();

std::cin.get();	
	return 0;
}

