#include "Savings_Account.h"
#include <iostream>

Savings_Account::Savings_Account()
	:Account(0.00), interest_rate{1.00}{
	std::cout << "(SAVINGS)	Empty Account Obj Made." << std::endl;
}

Savings_Account::Savings_Account(double bal_val, double int_rate)
	:Account(bal_val), interest_rate{int_rate}{
		std::cout << "(SAVINGS)	Account Made." << std::endl;
	}


Savings_Account::~Savings_Account()
{
	std::cout << "(SAVINGS)	Account Destroyed." << std::endl;
}

void Savings_Account::deposit(double amount){
	amount *= interest_rate;
	Account::deposit(amount);
}

