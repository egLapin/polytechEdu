#include <iostream>

using namespace std;

int main1()
{

	//1-5 пункты
	int n = 3;
	int* ptr_n = &n;

	cout << ptr_n << " value of it is: " << *ptr_n << endl;
	*ptr_n+=1;
	cout << *ptr_n << " = our ptr, " << n << " our variable" << endl << endl;

	//6-7
	int a[] = { 3, 4 ,6,8,31, 43 };
	int* ptr_arr = a;
	cout << "Elements of array by ptr:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << ptr_arr[i] << " ";
	}
	cout << endl << endl;

	//8-10
	int k = 5;
	int* const ptr_k = &k;
	
	cout << "ptr value: "<<  *ptr_k << endl;
	*ptr_k += 5;
	//ptr_k = new int(4); // error cuase it const ptr
	cout << "ptr value changed: " << *ptr_k << endl;
	cout << "var value changed too: "<<  k << endl;
	return 0;
}
