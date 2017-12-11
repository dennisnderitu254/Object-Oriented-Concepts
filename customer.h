#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include "person.h"
#include "account.h"

class CCustomer
{
	private:
		Person * person;
		CAccount * account;
	public:
		CCustomer();
		void SetFirstName(string name);
		void SetLastName(string name);
		void SetAge(int age);
		void SetGender(string gender);

		string GetFirstName();
		string GetLastName();
		int GetAge();
		string GetGender();

		void DepositAmount(double amount);
		void WithdrawAmount(double amount);
		double GetBalance();
		void Display();

		~CCustomer();

};




#endif 