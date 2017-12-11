#include <iostream>
#include <string>

using namespace std;

#include "customer.h"


CCustomer::CCustomer()
{
	person = new Person();
	account = new CAccount();
}

void CCustomer::SetFirstName(string name)
{
	person->set_firstname(name);
}

void CCustomer::SetLastName(string name)
{
	person->set_lastname(name);
}

void CCustomer::SetAge(int age)
{
	person->set_age(age);
}

void CCustomer::SetGender(string gender)
{
	person->set_gender(gender);
}


string CCustomer::GetFirstName()
{
	return person->get_firstname();
}

string CCustomer::GetLastName()
{
	return person->get_lastname();
}

int CCustomer::GetAge()
{
	return person->get_age();
}

string CCustomer::GetGender()
{
	return person->get_gender();
}

void CCustomer::DepositAmount(double amount)
{
	account->Deposit(amount);

}

void CCustomer::WithdrawAmount(double amount)
{
	account->Withdraw(amount);
}

double CCustomer::GetBalance()
{
	return account->GetBalance();
}

void CCustomer::Display()
{
	person->display();
	cout<<account->GetBalance()<<endl;
}


CCustomer::~CCustomer()
{
	delete person;
	delete account;
}