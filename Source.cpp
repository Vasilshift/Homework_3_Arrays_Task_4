#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

void main() {
	
	int i;
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Income array: " << endl;

	for (i = 0; i < 10; i++) {
		
		 cout << arr[i] << " ";

	}
	cout << endl;
	

	
	cout << endl;

	int arr2[] = { 0,0,0,0,0 };


	for (i = 0; i < 5; i++) {

		arr2[i] = arr2[i] + arr[i];

		cout << arr[i] << " ";

	}

	cout << endl;

	int arr3[5] = { 0,0,0,0,0 };


	for (i = 5; i < 10; i++) {

		arr3[i] = arr3[i] + arr[i];

		cout << arr[i] << " ";
		
	}




	//return;
}