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

void Student::addClass(Student s1)
{
    string tempCname;
    string tempCgrade;
    double tempCunits;



    cout << "Please enter the class name: ";
    cin >> tempCname;
    cout << "Please enter the total units of the class: ";
    cin >> tempCunits;
    cout << "Please enter the grade received: ";
    cin >> tempCgrade;

    Class_info *new_class = new Class_info(tempCname,tempCunits,tempCgrade);
	s1.classInfo_vector.push_back(*new_class);
    //cout << s1.classInfo_vector[0];

    cout << "Size of the bector is: " << s1.classInfo_vector.size();
}

void Student::printClasses(Student s1)
{
    //cout << "before for loop" << endl;
   //cout << s1.classInfo_vector[0];

    for(unsigned int i=0; i<s1.classInfo_vector.size(); i++)
    {
        cout << 25;
    }

//   cout << s1.classInfo_vector.size();
   // cout << sizev;
}

Student::~Student()
{
//Don't do anything.
}

