//////////////////////
// Task 1 - Find the GCD of 2 numbers.
// Martin Kirilov
// Group 3
// Information Systems
// FMI
//////////////////////

#include <iostream>
using namespace std;

int main() {
	int m = 0;
	int n = 0;
	int temp = 0;
	
	do {
		cout << "Enter the first number: " << endl;
		cin >> m;
		cout << "Enter the second number: " << endl;
		cin >> n;
	} while(m <= 0 || n <= 0);
	
	if(m < n) {
		temp = m;
		m = n;
		n = temp;
	}
	
	while(n != 0) {
		temp = m % n;
		m = n;
		n = temp;
	}
	
	cout << "The greatest common divisor is: " << m << endl;

	return 0;
}
