
#include "StdAfx.h"
#include <iostream>
#include "List.h"

using namespace std;

List::List(void)
{size = 0;}


List::~List(void)
{
}

//Check if list is empty
bool List::IsEmpty () { return size==0;}
//Check if list is full
bool List::IsFull () {return (size == MaxSize); }

void List::Insert (DataType e)
{
	//while the list is still not full, execute the following command for inserting
 if (!(IsFull()))
 {    Item[size] = e;
      size++;
 }
}


/* ordinary function - not a member function */
void Swap (DataType& x, DataType& y)
{                                
  DataType Temp;
  Temp = x;
  x = y;
  y =Temp;
}                                  

//Function for deleting variable from list
void List::Delete (DataType e)
{ 
 int index = 0; 
 //while the list is not yet empty, execute the following for deletion   
if  (!(IsEmpty()))
  {
    while ((index  < size) && (Item[index] != e) )
       index++;
       
      
    if (Item[index] == e)
    { 
	//If the specified variable exists, swap it with the last variable in the list
     Swap (Item[index], Item[size-1]);
    //Decrease the size of the list by 1
     size--;
    }
  }
}

//Function for displaying the entire list
void List::ShowData ()
{
 for (int index = 0; index < size; index++)
    cout << Item[index] << "   ";
    cout << endl;
	
}

