#include <iostream>

using namespace std;

int *largest_ptr(int *int_ptr1, int *int_ptr2);

int main(){
	int a {100}, b {3};
	int *largest_int {nullptr};
		largest_int = largest_ptr(&a, &b);
	
	cout << *largest_int << endl;
	
	return 0;
}


int *largest_ptr(int *int_ptr1, int *int_ptr2){
	if (*int_ptr1 > *int_ptr2)
		return int_ptr1;
	else
		return int_ptr2;
	
	
}