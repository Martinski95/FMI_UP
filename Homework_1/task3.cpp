//////////////////////
// Task 3 - Find the last zeroes in n!
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
		cout << "Enter the number: " << endl;
		cin >> n;
	} while(n < 1);
	
	cout << "The number of zeroes is: " << n / 5 << endl;
	
	return 0;
}
