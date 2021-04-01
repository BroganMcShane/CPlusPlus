#include "Trust_Account.h"
#include <string>
#include <iostream>
//#include "Savings_Account.h"

Trust_Account::Trust_Account()
	:Savings_Account(0.00, 1.00), name{"NULL"}{
		std::cout << "(TRUST)		Empty Account Made." << std::endl;
}

Trust_Account::Trust_Account(double bal_val, double int_rate, std::string name_val)
	:Savings_Account(bal_val, int_rate), name{name_val}{	
			std::cout << "(TRUST)	Account Made. "<< std::endl;
			
}

Trust_Account::~Trust_Account(){
	std::cout << "(TRUST)		Destroyed Account." << std::endl;
}

void Trust_Account::deposit(double amount){
	if (amount >=50000.00){
		amount += 50;
		Account::deposit(amount);
	}
	else{
		Account::deposit(amount);
	}
}

void Trust_Account::withdraw(double amount){
	if (num_of_withdrawal <=3){
		++num_of_withdrawal;
		if (amount <= (balance * allowed)){
			Account::withdraw(amount);
		}
		else{
			std::cout << "You cannot withdraw " << amount << " as it's more than 20% of your account balance" << std::endl;
		}
	}
	else{
		std::cout << "Cannot Withdraw: " << amount << "\nYou've reached your maximum amount of withdrawals this year." << std::endl;
	}
	
}