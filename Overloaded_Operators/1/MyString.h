#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
//	friend MyString operator-(const MyString &rhs);
	char *str;
public:
	MyString();
	MyString(const char *s);
	MyString(const MyString &src);
	MyString(MyString &&src);
	~MyString();
	
	void display_str();
	size_t get_length();
	//Overloaded Operators
	MyString operator-();
	MyString operator+(const MyString &rhs) const;
	bool operator==(const MyString &rhs) const;
	bool operator!=(const MyString &rhs) const;
};

#endif // _MYSTRING_H_
