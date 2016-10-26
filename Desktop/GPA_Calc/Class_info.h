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

using namespace std;

class Class_info  
{
public: 
//Default constructor
Class_info():

//Overaloaded Constructor 
Class_info(string classname, double classunits, double receivedunits);

//Destructor
~Class_info();



private: 
string class_name; 
double class_units; 
double received_units; 
};

