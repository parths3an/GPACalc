/*
Author: Parth Shah
Visualgo.net Data Structures Practice.
Bubble_Sort Implementation using random number generator.
This sorting can be done on different data type such as Char, string, double.
Just change the type.
*/
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
srand(time((0)));

int random_num = rand() %10 + 1;

cout << random_num;
/*

//Creating an array with fixed size.
int numbers[10];

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
*/
return 0;
}
