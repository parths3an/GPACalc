/*This class is to save information of specific class that
a person took. Infromation which will be saved in this class
is:
1. Class name
2. Units of Class
3. Received units
and future class variables includse is this class a pre-req of something.
*/
#include<string>
#include<iostream>
#include<vector>

using namespace std;

class Class_info
{
public:
//Default constructor
Class_info();

//Overaloaded Constructor
Class_info(string classname, double classunits, string receivedunits);

//Destructor
~Class_info();



//Accessor functions
string getCname();
string getCgrade();
double getCunits();

//Mutator Functions
void setCname(string);
void setCgrade(string);
void setCunits(double);

//To get the value of member in double formate.
double getCunitsDouble();
double getCgradeDouble();

//To convert the double values to String for the overloaded operator
string doubleTo_string(double);


/*
This function is suppose to create a new class object with all the details and
push_back to the vector and it willl return the vector
Update:
This function did not work out well so, create a global vector and keep adding elements to it.
*/

//Overloading << operator
friend ostream& operator<<(ostream& out,Class_info &new_class);




private:
string class_name;
string class_grade;
double class_units;
};

