#include "cperson.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	CPerson * person;
	person = new CPerson();
	const char* name="Brian";
	const char* DOB="13-04-1978";

	char Name[25];
	Name[0]='\0';
	strcpy(Name, name);
	//cout<<Name<<endl;
	person->SetName("Brian");
	person->SetAge(36);
	person->SetDOB("13-04-1978");

	person->Display();


}