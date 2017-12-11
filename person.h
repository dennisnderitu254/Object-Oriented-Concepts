
#ifndef _PERSON_H
#define _PERSON_H
#include <string>
using namespace std;
/*
The class Person represent the object person with follow 
attributes
			First Name -The first name of the person
			Last Name -The last name of the person
			Age,      -The age of the person
			Gender     -The gender of the person
operations
         set first name
         set last name
         set age
         set gender

         get first name
         get last name
         get age
         get gender
*/

class Person
{
private:
	string firstname;
	string lastname;
	int Age;
	string Gender;
public:
	//constructor -Initialise data members
	Person();

	void set_firstname(string fname);
	void set_lastname(string lname);
	void set_age(int age);
	void set_gender(string gender);
	
	string get_firstname();
	string get_lastname();
	int get_age();
	string get_gender();

	// get member functions
	void display();
	// destructor member function
	~Person();
};

# endif