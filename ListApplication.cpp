// ListApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "list.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
List L;

//Insert 3 variables to the list and display it
L.Insert (10); L.Insert (15); L.Insert (20);
L.ShowData ();
//Delete 15 from the list and display it
L.Delete (15); 
L.ShowData ();
//Insert two more variables to the list and delete 10 
L.Insert(30); L.Insert(50); L.Delete (10); 
//Display the list
L.ShowData (); 
//Add 5 new numbers to the list
L.Insert(45); L.Insert(16); L.Insert(13); L.Insert(07); L.Insert(78);
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

