#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

int main(){
//	std::cout << "Hello, Brogs" << std::endl;
	
//	Account *a1 = new Account();
//	a1->display_balance();
//	a1->deposit(1400);
//	a1->withdraw(1600);
//	a1->withdraw(1300);
//	a1->display_balance();
	
	
//	Savings_Account *s1 = new Savings_Account();
//	s1->display_balance();
//	s1->deposit(14000);
//	s1->display_balance();
//	s1->withdraw(12);
//	s1->display_balance();


//	Checking_Account *c1 = new Checking_Account();
//	c1->display_balance();
//	c1->deposit(1400);
//	c1->withdraw(2);
//	c1->display_balance();

	
	Trust_Account *t1 = new Trust_Account();
	t1->display_balance();
	t1 ->deposit(100);
	t1->withdraw(100);
	t1->display_balance();
	t1->withdraw(3);
	t1->withdraw(5);
	t1->withdraw(4);
	t1 ->withdraw(2);
	delete t1;
//	delete c1;
//	delete s1;
//	delete a1;
	return 0;
}