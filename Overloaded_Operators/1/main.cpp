#include <iostream>
#include "MyString.h"


int main(){
	
	std::cout << "Hello, World!" << std::endl;
	
	MyString one{"One"};
	MyString one_lcase = -one;
	MyString zero_one {"Zero "};
	zero_one + one;
	zero_one.display_str();
	bool t_or_f = (one == zero_one);
	std::cout << std::boolalpha; 
	std::cout << t_or_f << std::endl;
	bool t_or_f_2 = (one != one_lcase);
	std::cout << t_or_f_2 << std::endl;
	return 0;
}