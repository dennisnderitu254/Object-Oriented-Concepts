#include <iostream>
#include "person.h"

using namespace std;
Person::Person()
{

 	firstname="";
 	lastname= "";

 	Age= 0;
 	Gender = "";
}

void Person::set_firstname(string fname)
{
	firstname = fname;
}

void Person::set_lastname(string lname)
{
	lastname = lname;
}

void Person::set_age(int age)
{
	Age = age;
}

void Person::set_gender(string gender)
{
	Gender = gender;
}

string Person::get_firstname()
{

	return firstname;
}

string Person::get_lastname()
{

	return lastname;
}

int Person::get_age()
{

	return Age;
}

string Person::get_gender()
{

	return Gender;
}

void Person::display()
{
	

	cout<<"Firstname: "<< firstname <<endl;
	cout<<"Lastname: "<< lastname<<endl;
	cout<<"Age: "<< Age<<endl;
	cout<<"Gender: "<< Gender<<endl;


}


Person::~Person()

{

}