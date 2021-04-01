#include <cstring>
#include <iostream>
#include "MyString.h"

MyString::MyString()
{
	std::cout << "Empty object constructed." << std::endl;
	str = new char[1];
	*str = '\0';
}

MyString::MyString(const char *s){
	str = new char[std::strlen(s) +1];
	std::strcpy(str, s);
	std::cout << "Constructor called for: ";
	display_str();
}

MyString::MyString(const MyString &src)
	:str{nullptr}{
		str = new char[std::strlen(src.str) + 1];
		std::strcpy(str, src.str);
}

MyString::MyString(MyString &&src)
	:str{src.str}{
		src.str = nullptr;
}


MyString::~MyString()
{
	delete [] str;
}


MyString MyString::operator-(){
	char *buff = new char[std::strlen(str) + 1];
	std::strcpy(buff, str);
	for (size_t i {0}; i < std::strlen(buff); ++i)
		buff[i] = std::tolower(buff[i]);
	MyString temp{buff};
	delete [] buff;
	return temp;
}

MyString MyString::operator+(const MyString &rhs) const{
	size_t buff_size = std::strlen(str) + std::strlen(rhs.str);
	char *buff = new char[buff_size];
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);
	MyString temp {buff};
	delete [] buff;
	return temp;
}

bool MyString::operator==(const MyString &rhs) const{
	if(str == rhs.str)
		return true;
	return false;
}

bool MyString::operator!=(const MyString &rhs) const{
	if (str != rhs.str)
		return true;
	return false;
}


void MyString::display_str(){
	if (std::strlen(str) == 1)
		std::cout << *str << std::endl;
	for (size_t i{0}; i< get_length(); ++i)
		std::cout << str[i];
	std::cout << std::endl;
}

size_t MyString::get_length(){
	return std::strlen(str);
}