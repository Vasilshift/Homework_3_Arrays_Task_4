#include <iostream>

using namespace std;

int main() {
	
	int i, j;

	int arr[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Income array: " << endl;

	for (i = 0; i < 10; i++) {
		                              
		 cout << arr[i] << " ";    // output income array 

	}
	cout << endl << endl;
	
	for (i = 0; i < 5; i++) {

		cout << arr[i] << " ";     // output elements from 1 to 5

	}

	cout << endl;

	for (j = 5; j < 10; j++) {

		cout << arr[j] << " ";   // output elements from 6 to 10
		
	}
	
	cout << " ";

	int getch();
	return 0;
}