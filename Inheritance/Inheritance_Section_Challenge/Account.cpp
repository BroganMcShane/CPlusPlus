#include "Account.h"
#include <iostream>

Account::Account()
	:Account(0.00){
		std::cout << "(ACCOUNT)	Empty Account Obj Made." << std::endl;
}

Account::Account(double bal_val)
	:balance{bal_val}{
	std::cout << "(ACCOUNT)	Account Obj Made." << std::endl;
}

Account::~Account()
{
	std::cout << "(ACCOUNT)	Account Obj Destroyed." << std::endl;
}

void Account::deposit(double amount){
	balance += amount;
}

void Account::withdraw(double amount){
	if ((balance - amount)<0)
		std::cout << "You have insufficient funds to withdraw " << amount << std::endl;
	else{
		std::cout << "Withdrawing		" << amount << std::endl;
		balance -= amount;
	}
}

void Account::display_balance(){
	std::cout << "CURRENT BALANCE:	" << balance << std::endl;
}