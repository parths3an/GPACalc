
#include<iostream>
#include<string>
#include "Class_info.h"
#include<vector>

using namespace std;

class Student : Class_info
{
public:
//Deflault constructor
Student();

//Overloaded Constructor with vector of class
Student(string fname, string lname, string uname, string user_pw);

//Overaloded Constructor trial version with pointer to vector
//Student(string fname, string lname, string uname, string user_pw);

//Accessor Function
string getFname();
string getLname();
string getUsername();

//Mutetor Funciton
string set_fname(string fname);
string set_lname(string lname);
void set_pw(string user_input);


//Destructor
~Student();
vector<Class_info> classInfo_vector;

private:
//Member variables
string first_name;
string last_name;
int unique_id;
string username;
string pw;               //To Save the password.


};


