#include <iostream>

using namespace std;

void print_array(int array[], int size);
int *apply_all(int array1[], int array1_size, int array2[], int array2_size);


int main(){
	int array1 [] {3, 4, 5, 6};
	int array1_len = sizeof(array1) / sizeof(array1[0]);

	int array2 [] {5, 10, 15, 20};
	int array2_len = sizeof(array2) / sizeof(array2[0]);
	
	print_array(array1, array1_len);
	cout << endl;
	print_array(array2, array2_len);
	cout << endl;
	cout << endl;
	
	int *new_arr = apply_all(array1, array1_len, array2, array2_len);
	print_array(new_arr, (array1_len* array2_len));
	return 0;
}

void print_array(int array[], int size){
	for (int i {0}; i < size; ++i)
		cout << array[i] << " ";
	cout << endl;
}


int *apply_all(int array1[], int array1_size, int array2[], int array2_size){
	int size {array1_size * array2_size};
	
	int new_array[size] {}; 
	int *new_arr_ptr[size] {nullptr};

	
}