#include "school.h"


int main()
{
	int age;
	string fname;
	string lname;
	string gender;
	int marks;
	int regno;
	string form;
	string year;



	Student newperson;

	cout<<"Enter Firstname:"<<endl;
	cin>>fname;

	cout<<"Enter Lastname:"<<endl;
	cin>>lname;

	cout<<"Enter Age:"<<endl;
	cin>>age;

	cout<<"Enter Gender:"<<endl;
	cin>>gender;

	cout<<"Enter Marks:"<<endl;
	cin>>marks;

	cout<<"Enter Registration No:"<<endl;
	cin>>regno;

	cout<<"Enter Form:"<<endl;
	cin>>form;

	cout<<"Enter Year:"<<endl;
	cin>>year;


	newperson.set_firstname(fname);
	newperson.set_lastname(lname);
	newperson.set_age(age);
	newperson.set_gender(gender);
	newperson.set_marks(marks);
	newperson.set_regno(regno);
	newperson.set_form(form);
	newperson.set_year(year);
	newperson.display();

	return 0;
}