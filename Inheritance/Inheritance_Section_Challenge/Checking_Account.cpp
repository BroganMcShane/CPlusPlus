#include "Checking_Account.h"
#include <iostream>
#include <string>

Checking_Account::Checking_Account()
	:Account(0.00), name{"Null"}{
		std::cout << "(CHECKING)	Empty Object Created." << std::endl;
}


Checking_Account::Checking_Account(double bal_val, std::string name_val)
	:Account(bal_val), name{name_val}{
		std::cout << "(CHECKING)	Object Created." << std::endl;
}


Checking_Account::~Checking_Account()
{
	std::cout << "(CHECKING)	Destroying Obj." << std::endl;
}

void Checking_Account::withdraw(double amount){
	if (balance - (amount + fee) < 0){
		std::cout << "Cannot Withdraw " << amount << " you have insufficent funds." << std::endl;
	}
	else{
		amount += fee;
//		std::cout << "Withdrawing " << amount << " from your funds." << std::endl;
		Account::withdraw(amount);
	}
	
	
}