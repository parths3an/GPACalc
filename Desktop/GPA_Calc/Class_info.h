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
Class_info(string classname, double classunits, double receivedunits);

//Destructor
~Class_info();

//Accessor functions
string getClass_name();
double getClass_receivedcredit();
double getClass_units();

//Mutator Functions
void setClass_name(string);
void setClass_receivedcredit(double);
void setClass_units(double);


/*
This function is suppose to create a new class object with all the details and
push_back to the vector and it willl return the vector

*/
 vector<Class_info> new_Class_info();






//Overloading << operator
friend ostream& operator<<(ostream& out,Class_info &new_class);

protected:
string class_name;
double class_units;
double received_units;
};

