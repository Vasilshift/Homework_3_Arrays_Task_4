#include <iostream>

using namespace std;

int main() {
	
	int i, j;

	int arr[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Income array: " << endl;

	for (i = 0; i < 10; i++) {
		
		 cout << arr[i] << " ";

	}
	cout << endl << endl;
	
	int arr2[] { 0, 0, 0, 0, 0 };

	for (i = 0; i < 5; i++) {

		cout << arr[i] << " ";

	}

	cout << endl;


	
	for (j = 5; j < 10; j++) {

		cout << arr[j] << " ";
		
	}
	
	cout << " ";

	int getch();
	return 0;
}