/*
Author: Parth Shah
Visualgo.net Data Structures Practice.
Bubble_Sort Implementation.
This sorting can be done on different data type such as Char, string, double.
Just change the type.
*/
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//Prototype of the Function.
int display_array(int [], int);

int main()
{
//Creating an array with fixed size.
int numbers[10];
const int array_size = sizeof(numbers)/sizeof(numbers[0]);

//Filling the array with random numbers.
for(int m=0; m < array_size; m++)
{
    int temp = rand() %  10 + 1;
    numbers[m]= temp;
}

cout << "Numbers in unsorted form are as below." << endl; 
display_array(numbers,array_size);

	
//Selection Sort Algorithm. 
int smallest=0;
int smallest_index =0;
int temp_value = 0;	
	
	for(int i=0; i<array_size-1; i++)
	{ 
			smallest_index = i;
			smallest = numbers[i];
		for(int m=i+1; m < array_size; m++)
		{
			if( numbers[m] < smallest)
			{
				
				smallest=numbers[m];
				smallest_index = m;
			}
				
		}   //Swap two values. 
	        temp_value = numbers[smallest_index];
			numbers[smallest_index] = numbers[i];
		    numbers[i] = temp_value;
	}
	
//Print out the soreted list. 
	cout << endl << "Sorted list is here! \n";
	display_array(numbers,array_size);
	
	
	

cin.get();
return 0;
}

//Defining helper Functions.
int display_array(int temp_array[], int size)
{
//int temp_array_size = sizeof(temp_array)/sizeof(temp_array[0]);
    for(int i =0; i< size; i++)
    {
        cout << temp_array[i] << "  ";


    }

}
