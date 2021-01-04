#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	int i;
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Income array: " << endl;

	for (i = 0; i < 10; i++) {
		
		 cout << arr[i] << " ";

	}
	cout << endl;
	
	cout << "Array elements from 1 to 5: " << endl;

	for (i = 0; i < 5; i++) {

		cout << arr[i] << " ";
				
	}

	cout << endl;
	
	cout << "Array elements from 5 to 10: " << endl;

	for (i = 5; i < 10; i++) {

		cout << arr[i] <<" ";

	}
	
	cout << endl;

	return 0;
}