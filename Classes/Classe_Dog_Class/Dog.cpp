#include <iostream>
#include <string>

#include "Dog.h"

int Dog::num_of_dogs = 0;

//CONSTRUCTOR 
Dog::Dog(std::string name_val, int age_val, std::string breed_val)
{
	name = new std::string;
	*name = name_val;
	age = new int;
	*age = age_val;
	breed = new std::string;
	*breed = breed_val;
	++num_of_dogs;
	
	std::cout << "Constructor calle for: " << *name << std::endl;
}

//COPY CONSTRUCTOR
Dog::Dog(const Dog &source)
	: Dog(*source.name, *source.age, *source.breed){
		std::cout << "Copy Constructor called for: " << *name << std::endl;
	}


//MOVE CONSTRUCTOR
Dog::Dog(Dog &&source)
	:Dog(*source.name, *source.age, *source.breed){
		std::cout << "Move constructor called for: " << *name << std::endl;
		name = nullptr;
		age = nullptr;
		breed = nullptr;
	}


void Dog::speak(){
	std::cout << "WOOF! " << "My name is " << get_name_val() << ", I'm a " << get_age_val() << " year old " << get_breed_val() << std::endl;
}


Dog::~Dog()
{
	if (name != nullptr)
		std::cout << "Destructor called for: " << *name << std::endl;
	else
		std::cout << "Destructor called to free space." << std::endl;
	
	
	delete name;
	delete age;
	delete breed;
}

