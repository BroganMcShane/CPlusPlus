#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account: public Account
{
protected:
	double interest_rate;
public:
	Savings_Account();
	Savings_Account(double bal_val, double int_rate);
	~Savings_Account();
	
	void deposit(double amount);
	

};

#endif // _SAVINGS_ACCOUNT_H_
