#ifndef _CACCOUNT_H
#define _CACCOUNT_H

class CAccount
{
private:
	double Balance;
public:
	CAccount();
	void Deposit(double amount);
	void Withdraw(double amount);
	double GetBalance();
	~CAccount();
};

#endif