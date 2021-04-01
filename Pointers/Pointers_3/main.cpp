#include <iostream>

using namespace std;

int main(){
//	//Dynamic allocating the size of an array
//	
//	int arr_size {};
//	int *arr_size_ptr {nullptr};
//	
//	cout << "What would you like the size of your array to be? ";
//	cin >> arr_size;
//	
//	cout << "Your given size: " << arr_size << endl;
//	
//	arr_size_ptr = new int[arr_size];
//	
//	cout << "Size of arr: " << arr_size_ptr << endl;
//	
//	delete [] arr_size_ptr;

	//Understanding subscript notation and offset notation
	
	int my_int_arr[] {4, 3, 2};
	int *int_arr_ptr {my_int_arr};
	
	cout << my_int_arr << endl;
	cout << int_arr_ptr << endl;
	cout << *int_arr_ptr << endl;
	cout << *my_int_arr << endl;
	
	cout << "\nArray subscript notation: " << endl;
	cout << my_int_arr[0] << endl;
	cout << my_int_arr[1] << endl;
	cout << my_int_arr[2] << endl;
	
	cout << "\nPointer subscript notation " << endl;
	cout << int_arr_ptr[0] << endl;
	cout << int_arr_ptr[1] << endl;
	cout << int_arr_ptr[2] << endl;
	
	cout << "\nArray offset notation: " << endl;
	cout << *(my_int_arr + 0) << endl;
	cout << *(my_int_arr + 1) << endl;
	cout << *(my_int_arr + 2) << endl;
	
	cout << "\nPointer offset notation: " << endl;
	cout << *(int_arr_ptr + 0) << endl;
	cout << *(int_arr_ptr + 1) << endl;
	cout << *(int_arr_ptr + 2) << endl;
	
	cout << endl;
	
	
	
	return 0;
}