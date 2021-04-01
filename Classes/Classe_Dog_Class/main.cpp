#include <iostream>
#include <string>
#include <vector>
#include "Dog.h"

using namespace std;



int main(){
	Dog star("Star McShane", 10, "Bichon Frise");
	Dog Star_Copied(star);
	cout << Dog::get_num_of_dogs() << std::endl;

	vector<Dog> vec;
	
	vec.push_back(Dog{"Sky", 3, "bICHON"});
	cout << Dog::get_num_of_dogs() << std::endl;
	//vec.push_back(Dog{"Luna", 1, "Bichon Frise"});
	//cout << Dog::get_num_of_dogs() << std::endl;
	vec.push_back(Dog{star});

	return 0;
}
