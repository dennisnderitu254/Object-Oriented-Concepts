#include <iostream>
using namespace std;

#include "account.h"

CAccount::CAccount()
{
	Balance=0.0;

}

void CAccount::Deposit(double amount)
{
	Balance += amount;
}

void CAccount::Withdraw(double amount)
{
	Balance -= amount;
}

double CAccount::GetBalance()
{
	return Balance;
}

CAccount::~CAccount()
{

}