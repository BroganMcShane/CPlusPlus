#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"
#include <string>

class Checking_Account: public Account
{
	std::string name;
	double fee = 1.50;
public:
	Checking_Account();
	Checking_Account(double bal_val, std::string name_val);
	~Checking_Account();
	
	void withdraw(double amount);
};

#endif // _CHECKING_ACCOUNT_H_
