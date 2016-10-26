#include<iostream>
#include "Student.h"

using namespace std;


//Function declarations
void menu();



int main()
{
//Variable declaration 
bool loop_terminator= true;
string fname, lname, username,pw;
int unique_id;


while(loop_terminator)
{
//Give user the menu
menu();

loop_terminator = false; 
int selection; 

//Allow user to make selection 
cout << "Please enter a choice among 1-4: "; 
cin >> selection; 
//Create a new object to save user info.
Student s1;

//swtich statement to take user info 
	switch(selection)
	{
	 case 1: 
 		cout << "Please enter your first name: "; 
       		cin >> fname; 
		s1.set_fname(fname);	
        	cout << s1.get_fname();
		break; 
	default:
		cout << "default worked."; 
		loop_terminator = false; 
	}
} //For the while loop.

return 0;
}




//Function definition 

void menu()
{

string print_string = "Please select a proper option to to do:\n";
/* + "1: To enter the first name \n" + "2: To enter last name \n" + "3: username \n" + "4: password \n";
*/
cout << print_string;             
}























