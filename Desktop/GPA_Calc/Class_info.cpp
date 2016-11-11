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

//Overloading << operator
std::ostream& operator<<(std::ostream &out, Class_info& new_classInfo)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "\n Class: " << new_classInfo.getClass_name() << "\n " << "Class units: " << new_classInfo.getClass_units() << "\n " <<"Received credits: " << new_classInfo.getClass_units() << "\n";

    return out;
}



