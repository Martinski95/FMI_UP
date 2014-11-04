//////////////////////
// Task 2 - print an nxn matrix in the console.
// Martin Kirilov
// Group 3
// Information Systems
// FMI
//////////////////////

#include <iostream>
using namespace std;

int main() {
	int n = 0;
	
	do {
		cout << "Enter the dimention of the matrix between 1 and 10: " << endl;
		cin >> n;
	} while(n < 2 || n > 9);
	
	for(int i = 1; i <= n * n; i++) {
		if(i < 10) {
			cout << "  ";
		} else {
		 	cout << " ";
		}	
		
		cout << i;
		
		if(i % n == 0) {
			cout << endl;
		}
	}
	
	return 0;
}
