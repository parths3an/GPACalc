/*
Author: Parth Shah
Visualgo.net Data Structures Practice.
Merge_Sort Implementation.
This sorting can be done on different data type such as Char, string, double.
Just change the type.
This sorting algorithm is little bit tricky. Please review the recursion to understand this algorithm better. 

This algo is one of the divide and conqure algos, Where you break the problem down in several part them and solve each
of them. 
This algorithm has two significant part: T
1. Dividing the array into smalles array and eventually making a arrays of 1 element each.
2. Sorting each element and then merging with other individual element and keep merging to get back to 
the original array. 

*/
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//##############################################
//Prototype of the Function.
//##############################################
//1. Display Array. 
int display_array(int [], int);

//2. Divide original Array into small arrays. 
void divide_array(int [], int low, int high, int size);


///3. Merge Small individual Arrays. 
void merge_sort(int array[], int beg_index, int mid_index, int end_index, int array_size);


//##############################################
//Main Function.
//##############################################
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

	
//Function calls: 
divide_array(numbers, 0, array_size-1, array_size);    
    
    
//Print out the soreted list. 
	cout << endl << "Sorted list is here! \n";
	display_array(numbers,array_size);
cin.get();
return 0;
}

//###############################################
//Defining helper Functions.
//###############################################


int display_array(int temp_array[], int size)
{
    for(int i =0; i< size; i++)
    {
        cout << temp_array[i] << "  ";
    }
}

void divide_array(int array[], int low,int high, int array_size)
{
    
  if(low < high)
    {
        int mid = (low+high) / 2;                      // Dividing the array in to two parts.
        divide_array(array,low,mid,array_size);       //Make recursive call to divide the left part of the array.
        divide_array(array, mid+1, high, array_size);    //Make recursive call to divied the right part of the array. 
        merge_sort(array,low, mid, high, array_size);  //Finally make a call to merge_sort function to sort and merge the each array. 
    }
 }

void merge_sort(int array[], int low,int mid,int high, int aray_size)
{
    int temp[high-low+1];
    int left = low; 
    int right = mid + 1; 
    int temp_index = 0;
    
    while(left <= mid && right <= high)         //While the element is in has index 0 to n-1. Checks for out of bound. 
       {
         if(array[left] <= array[right])
           {
            temp[temp_index] = array[left];
               left++;
           }
         else 
           {
            temp[temp_index] = array[right];
            right++;
           }
            temp_index++;
       }
       
    if(left <= mid)
    {
        while(left <= mid)
        {
        temp[temp_index]= array[left];
        left++;
        temp_index++;    
        }
    }
    else if(right <= high)
    {
        while(right <= high)
        {
        temp[temp_index]= array[right];
        right++;
        temp_index++;
        }    
    }

for(int j=0; j <10; j++)
{
    
array[low+j] = temp[j];
}



}










