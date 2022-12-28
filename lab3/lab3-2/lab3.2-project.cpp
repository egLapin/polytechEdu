#include <iostream>

using namespace std;

//1-2
int ArraySum(int* (&arr_start) , int* (&arr_end)) {
	int s = 0;
	for (auto i = arr_start; i != arr_end; i++) {
		s += *i;
	}
	return s;
}

int MinusFunc(int param1, int param2)
{ 
	return param1 - param2; 
}

int PlusFunc(int param1, int param2)
{
	return param1 + param2;
}


int (*calc(char symb))(int, int) {
	if (symb == '+') return PlusFunc;
	if (symb == '-') return MinusFunc;
	else return 0;
}

int main()
{
	//1-2
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8}; // 8 sum = 36
	int* ptr_arr_start = &arr[0];
	int* ptr_arr_end = &arr[8];

	cout << ArraySum(ptr_arr_start, ptr_arr_end) << endl;

	//3
	int a = 5, b = 3;
	cout << "Minus: " << MinusFunc(a, b) << "  Plus: " << PlusFunc(a, b) << endl << endl;

	//4-6
	int(*func)(int, int);
	func = calc('+');
	cout << func(a, b) << endl;
	func = calc('-');
	cout << func(a, b) << endl;

	//6-8
	float* ptr_float = new float(2.43);
	cout << *ptr_float << endl;
	delete ptr_float;

	return 0;
}