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

display_array(numbers,array_size);

//Sorting algorithm.
    for(int i=0; i<=8; i++)
{
    int temp;

    for(int j=i+1; j<=9; j++)
       {
        if(numbers[i]> numbers[j])

            {
                temp = numbers[i];
                numbers[i]= numbers[j];
                numbers[j] = temp;
            }
       }
}

                for(int i=0; i <10 ; i++)
                {
                    cout << "Numbers in sorted form are: " << numbers[i] << "\n ";
                }

cin.get();
return 0;
}

//Defining helper Functions.
int display_array(int temp_array[], int size)
{
//int temp_array_size = sizeof(temp_array)/sizeof(temp_array[0]);
    for(int i =0; i< size; i++)
    {
        cout << temp_array[i] << endl;


    }

}






