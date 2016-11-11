#include<iostream>
#include "Student.h"

using namespace std;


//Function declarations
void menu();



int main()
{
//Variable declaration
bool loop_terminator= true;
string first_name="sam", lname="shah", username="kingcobra",pw="pw";
int unique_id;


while(loop_terminator)
{
//Give user the menu
menu();

loop_terminator = true;
int selection;

//Allow user to make selection
cout << "Please enter a choice among 1-4: ";
cin >> selection;
//Create a new object to save user info.
vector<Class_info> new_class;
Student s1(first_name,lname,username,pw,new_class);

//swtich statement to take user info
	switch(selection)
	{
	 case 1:
		{
		string temp;
 		cout << "Please enter your first name: ";
       		cin >> first_name;
		s1.set_fname(first_name);
		string user_firstname = s1.get_fname();
		cout << "The user's name is: " << user_firstname << endl;
		break;
		}

	case 8:
		{
		  loop_terminator = false;
		  break;


		}
	default:
		{
		cout << "Please select a any option between 1-8.";
		}
		break;
	}
} //For the while loop.

return 0;
}




//Function definition

void menu()
{
cout << "Please select a proper option to to do:\n";
cout << "1: To enter data for a new student \n" << "2: To enter last name \n" << "3: username \n" << "4: password\n";
cout << "8: Quit" << endl;

}























