#include <iostream>
#include <string>
#ifndef _DOG_H_
#define _DOG_H_

class Dog
{
	std::string *name;
	int *age;
	std::string *breed;
	static int num_of_dogs;
	friend void display_dog(Dog &d);
public:
	//CONSTRUCTOR
	Dog(std::string name_val = "None", int age_val = 0, std::string breed_val = "None");
	//COPY CONSTRUCTOR
	Dog(const Dog &source);
	//MOVE CONSTRUCTOR
	Dog(Dog &&source);
	//DESTRUCTOR
	~Dog();
	
	//SETTERS AND GETTERS
	void set_name_val(std::string n){*name = n;};
	std::string get_name_val(){return *name;};
	void set_age_val(int a){*age = a;};
	int get_age_val(){return *age;};
	void set_breed_val(std::string b){*breed=b;};
	std::string get_breed_val(){return *breed;};
	void speak();
	static int get_num_of_dogs(){return num_of_dogs;};
};

#endif // _DOG_H_
