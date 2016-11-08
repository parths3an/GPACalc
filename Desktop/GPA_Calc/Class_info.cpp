#include "Class_info.h"


/*
This file containts the definition of the "Class" class. 
This class will be used to save the information about a 
class that student took.
*/

//Constructor 
Class_info::Class_info()
{
class_name = "NOT INITIALIZED";
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



