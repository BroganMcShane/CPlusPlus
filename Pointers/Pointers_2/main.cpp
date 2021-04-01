#include <iostream>
#include <string>

using namespace std;

int main(){
//	int score {100};
//	int *score_pointer {&score};
//	
//	cout << *score_pointer << endl;
//	cout << score << endl;
//	
//	//Dereference:
//	*score_pointer = 200;
//	cout << *score_pointer << endl;
//	cout << score << endl;

//	double high_temp {40.434};
//	double low_temp {3.33};
//	double *temp_ptr {&low_temp};
//	
//	cout << *temp_ptr << endl;
//	temp_ptr = &high_temp;
//	cout << *temp_ptr << endl;

	string my_name {"Brogan"};
	string *name_ptr {&my_name};
	cout << *name_ptr << endl;
	
	*name_ptr = "Tyler Durden This Burden Hurtin'";
	cout << *name_ptr << endl;
	
	my_name = "Nigga Balls";
	cout << *name_ptr << endl;
	
	
	return 0;
}