#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
protected:
	double balance;
public:
	Account();
	Account(double bal_val);
	~Account();
	
	void deposit(double amount);
	void withdraw(double amount);
	void display_balance();
};

#endif // _ACCOUNT_H_
