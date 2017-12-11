#include <iostream>
#include "student.h"
using namespace std;

Student::Student()
{
	Marks=0;
	RegNo=0;

	Form="";
	Year="";
}
void Student::set_marks(int marks)
{
	Marks = marks;

}

void Student::set_regno(int regno)
{
	RegNo=regno;

}

void Student::set_form(string form)
{
	Form = form;

}

void Student::set_year(string year)
{
	Year=year;

}
	
int Student::get_marks()
{
	return Marks;

}

int  Student::get_regno()
{
	return RegNo;

}

string Student::get_form()
{
	return Form;

}

string Student::get_year()
{
	return Year;

}

void Student::display()
{



	
	cout<<"Firstname: "<<get_firstname()<<endl;
	cout<<"Lastname: "<<get_lastname()<<endl;
	cout<<"Age: "<<get_age()<<endl;
	cout<<"Gender: "<<get_gender()<<endl;

	cout<<"Marks:"<<Marks<<endl;
	cout<<"Registration No:"<<RegNo<<endl;
	cout<<"Form:"<<Form<<endl;
	cout<<"Year:"<<Year<<endl;

}

Student::~Student()
{

}