#include <iostream>
#include <string>
using namespace std;

#include "customer.h"

int main()
{
	CCustomer * customer = new CCustomer();

	customer->SetFirstName("Razor");
	customer->SetLastName("Callman");
	customer->SetAge(34);
	customer->SetGender("Male");

	customer->DepositAmount(1000);
	customer->Display();
}
