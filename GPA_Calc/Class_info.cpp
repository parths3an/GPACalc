#include "Class_info.h"
#include<sstream>

/*
This file containts the definition of the "Class" class.
This class will be used to save the information about a
class that student took.
*/

//Constructor
Class_info::Class_info()
{
class_name = "X";
class_units = 4.0;
class_grade = "A";
}

//Destructor
Class_info::~Class_info()
{}

//Overloadee Constructor
Class_info::Class_info(string classname, double classunits, string receivedunits)
{
	class_name = classname;
	class_units = classunits;
	class_grade = receivedunits;
}

//Overloading << operator
std::ostream& operator<<(std::ostream &out, Class_info& new_classInfo)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "\n Class: " << new_classInfo.getCname() << "\n " << "Class units: " << new_classInfo.getCunits()
        << "\n " <<"Received credits: " << new_classInfo.getCunits() << "\n";

    return out;
}

//accessor functions
string Class_info::getCname()
{
    return class_name;
}

string Class_info::getCgrade()
{
    return class_grade;
}

double Class_info::getCunits()
{
    return class_units;
}


//Mutator function
void Class_info::setCname(string className)
{
 class_name = className;
}

void Class_info::setCgrade(string classReceived_credit)
{
 class_grade = classReceived_credit;
}

void Class_info::setCunits(double classUnits)
{
 class_units = classUnits;
}


double Class_info::getCunitsDouble()
{
    return class_units;
}

double Class_info::getCgradeDouble()
{
    string tempGrade;
    tempGrade = class_grade;

    if(tempGrade == "A"  || tempGrade == "a")
    {
     return 4.0;
    }
    else if(tempGrade == "B" || tempGrade == "b")
    {
     return 3.0;
    }
    else if(tempGrade == "C"  || tempGrade == "c")
    {
     return 2.0;
    }
    else if(tempGrade == "D" || tempGrade == "d")
    {
    return 1.0;
    }
    else if (tempGrade == "F" || tempGrade == "f")
    {
     return 0.0;
    }
    else
    {
    //To check for wrong grade input
    return -99999; //To show the wrong user input.
    }
}
//This function will be useful for writting units of the class to cout.
//Since we can only use cout for the string type variales we will have to convert
//it from double to string.
string Class_info::doubleTo_string(double db1)
{
    ostringstream doubletoString;
    doubletoString << db1;
    string temp_string = doubletoString.str(); //Using inbuilt function.
    return temp_string;
}




/*Fix the problem in this function

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


*/

