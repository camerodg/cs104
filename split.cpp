/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

/* Add a prototype for a helper function here if you need */
void split(Node*& in, Node*& odds, Node*& evens)
{


if(in == NULL)
	{

		return;
	}
     
    //checks to see if the value is even or odd
	if(in->value % 2 == 0)
	{
		evens = in;
		
		//Recurivsely call the function split to iterate through the whole linked list and create the even and odd function
		//split(in->next, odds, evens);
		
	}
    //checks to see if the value is even or odd
	else 
	{
		odds = in;
		
		//Recurivsely call the function split to iterate through the whole linked list and create the even and odd function
		//split(in->next, odds, evens);	
	}
	split(in->next, odds->next, evens->next);

}
/* If you needed a helper function, write it here */
