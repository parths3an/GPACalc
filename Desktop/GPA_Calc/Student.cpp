#include "Student.h"

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
Student::Student(string fname, string lname, string uname, string user_pw,vector<Class_info> classes_vector)
{
first_name = fname;
last_name = lname;
username= uname;
pw= user_pw;
classInfo_vector = classes_vector;
}




//Accessor Function.
string Student::get_fname()
{
	return first_name;
}

string Student::get_lname()
{
	return last_name;
}

string Student::get_username()
{
	return username;
}

//Mutetor Funciton
void Student::set_fname(string fname)
{
 first_name = fname;
}

string Student::set_lname(string lname)
{
 last_name = lname;
}

string Student::set_pw(string user_input)
{
pw = user_input;
}


Student::~Student()
{
//Don't do anything.
}

