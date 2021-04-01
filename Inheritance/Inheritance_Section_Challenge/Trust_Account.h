#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

#include <string>

class Trust_Account: public Savings_Account
{

	int num_of_withdrawal = 0;
	double reward = 50;
	double allowed = 0.2;
	
protected:
	std::string name;

public:
	Trust_Account();
	Trust_Account(double bal_val, double int_rate, std::string name_val);
	~Trust_Account();
	
	void deposit(double amount);
	
	void withdraw(double amount);
};

#endif // _TRUST_ACCOUNT_H_
