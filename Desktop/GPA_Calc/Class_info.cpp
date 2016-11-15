#include "Class_info.h"


/*
This file containts the definition of the "Class" class.
This class will be used to save the information about a
class that student took.
*/

//Constructor
Class_info::Class_info()
{
class_name = "";
class_units = 0.0;
received_units = 0.0;
}

//Destructor
Class_info::~Class_info()
{}

//Overloadee Constructor
Class_info::Class_info(string classname, double classunits, double receivedunits)
{
	class_name = classname;
	class_units = classunits;
	received_units = receivedunits;
}

//Overloading << operator
std::ostream& operator<<(std::ostream &out, Class_info& new_classInfo)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "\n Class: " << new_classInfo.getClass_name() << "\n " << "Class units: " << new_classInfo.getClass_units() << "\n " <<"Received credits: " << new_classInfo.getClass_units() << "\n";

    return out;
}

//accessor functions
string Class_info::getClass_name()
{
    return class_name;
}

double Class_info::getClass_receivedcredit()
{
    return received_units;
}

double Class_info::getClass_units()
{
    return class_units;
}


//Mutator function
void Class_info::setClass_name(string className)
{
 class_name = className;
}

void Class_info::setClass_receivedcredit(double classReceived_credit)
{
 received_units = classReceived_credit;
}

void Class_info::setClass_units(double classUnits)
{
 class_units = classUnits;
}


/*Fix the problem in this function*/
 vector<Class_info> Class_info::new_Class_info()
{
    //temp variables
    string temp_name;
    double temp_receivedcredit, temp_classUnits;
    //vector<Class_info> temp_vector;


    //Create a Class_info object Dynamically.


    cout << "Please enter the Class name, Ex: CSE 15L, CSE 12 : ";
    cin >> temp_name;
    cout << "\n Please enter the total Units of "<< temp_name << ": ";
    cin >> temp_classUnits;
    cout << "\n Please enter the received Units in " << temp_name << ": ";
    cin >>  temp_receivedcredit;
    cout << endl;

    Class_info *temp_obj = new Class_info(temp_name, temp_receivedcredit, temp_classUnits);

    new_classInfo.push_back(*temp_obj);
    delete temp_obj;
    return new_classInfo;

}




