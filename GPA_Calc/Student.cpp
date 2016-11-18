#include "Student.h"
#include <vector>
//Default constructor
Student::Student()
{
first_name = "";
last_name = "";
unique_id = 0;
username= "";
pw= "";
}

//Overloaded Contstruct
Student::Student(string fname, string lname, string uname, string user_pw)
{
first_name = fname;
last_name = lname;
username= uname;
pw= user_pw;
}

//Overaloded Constructot with class_info vector
//Overloaded Contstruct
/*
Student::Student(string fname, string lname, string uname, string user_pw)
{
first_name = fname;
last_name = lname;
username= uname;
pw= user_pw;
}
*/



//Accessor Function.
string Student::getFname()
{
	return first_name;
}

string Student::getLname()
{
	return last_name;
}

string Student::getUsername()
{
	return username;
}


//Mutetor Funciton
string Student::set_fname(string fname)
{
 first_name = fname;
 return fname;
}

string Student::set_lname(string lname)
{
 last_name = lname;
 return lname;
}

void Student::set_pw(string user_input)
{
pw = user_input;
}


Student::~Student()
{
//Don't do anything.
}

