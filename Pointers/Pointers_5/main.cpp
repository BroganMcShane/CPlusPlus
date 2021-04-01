#include <iostream>

using namespace std;

void double_data(int *data_ptr){
	
	*data_ptr *= 2;
	
}



int main(){
	int val {20};
	int *int_ptr {nullptr};
	
	cout << val << endl;
	//cout << endl;
	
	
	double_data(&val);
	cout << val << endl;
	
	int_ptr = &val;
	double_data(int_ptr);
	
	cout << *int_ptr << endl;
	
	return 0;
}