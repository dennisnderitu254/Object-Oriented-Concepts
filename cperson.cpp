#include <iostream>
#include <cstring>
using namespace std;
#include "cperson.h"



CPerson::CPerson()
{
	Name[0]='\0'; // setting '\0' (null) terminator
	Age=0;
	DOB[0]='\0';
}

void CPerson::SetName(const char* name)
{
	strcpy(Name, name);
}

void CPerson::SetAge(int age)
{
	Age=age;
}

void CPerson::SetDOB(const char* dob)
{
	strcpy(DOB, dob);
}

char* CPerson::GetName()
{
	return Name;
}

int CPerson::GetAge()
{
	return Age;
}

char* CPerson::GetDOB()
{
	return DOB;
}

void CPerson::Display()
{
	cout<<Name<<endl;
	cout<<Age<<endl;
	cout<<DOB<<endl;
}

CPerson::~CPerson()
{

}