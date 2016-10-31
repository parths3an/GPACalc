#include<iostream>
#include "Stack.h"

using namespace std; 


Stack::Stack(int size)
{
 //Set the stack top to be the first element 
	stacktop = 0;
	maxstack_size = size;
	list = new int[maxstack_size];
}

Stack::~Stack()
{
delete[] list;
}

void Stack::isStack_full()
{
 if(maxstack_size == stacktop)
 {
   cout << "Stack is Full\n";

 }
else 
 {
  cout << "Stack is not full.\n";
 }
}
 
void Stack::isStack_empty()
{
	 if(stacktop ==0 )
	 {
	cout << "Stack is Empty\n";
         }
	else 
	 {
	cout << "Stack is not Emptyn\n";
	 }
}

//Mutator functions
void Stack::push(int newitem)
{
 if(stacktop != maxstack_size)
 {
  list[stacktop] = newitem; 
  stacktop++;
 }
else 
 {
  cout << "Stack is Full can't push any more elements. \n";
 }
}

void Stack::pop()
{
	if(stacktop == 0 )
	{
	 cout << "Can't pop any elements, Stack is empty.\n";
	}
	else 
	{
	 stacktop--;
	}
}

int Stack::top() 
{
	if(stacktop == 0)
	{
	 cout << "Stack is empty. No values on the top of the stack.\n ";
         return -999999;		
	}
	else
	{
	 return list[stacktop-1];
	} 

}




