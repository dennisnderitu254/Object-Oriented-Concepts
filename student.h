#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>
using namespace std;
#include "person.h"

class Student: public Person
{

private:
	int Marks;
	int RegNo;
	string Form;
	string Year;

public:
	public:
	//constructor
	Student();
	
	void set_marks(int marks);
	void set_regno(int regno);
	void set_form(string form);
	void set_year(string year);
	
	int get_marks();
	int get_regno();
	string get_form();
	string get_year();

	// get member functions
	void display();
	// destructor member function
	~Student();

};

# endif