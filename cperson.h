#ifndef _CPERSON_H
#define _CPERSON_H

#include <iostream>
#include <cstring>
using namespace std;
#define NAMESIZE 25


class CPerson
{
private:
	char Name[NAMESIZE];
	int Age;
	char DOB[NAMESIZE];
public:
	CPerson();

	void SetName(const char* name);
	void SetAge(int age);
	void SetDOB(const char* dob);

	char* GetName();
	int GetAge();
	char* GetDOB();
	void Display();

	~CPerson();

};






#endif