#include <iostream>

using namespace std; 

int main () 
{
	//bool var1 = true; 
	//bool var2 = false;
	int num1;
	cout << "Enter a NUMBER: "; 
	cin >> num1; 
	if (num1 > 3) {
		cout << "The number is greater than 3!" << endl; 
	}
	else if (num1 < 3) { 
		cout << "The number is smaller than 3!" << endl; 
	}
	else if (num1 == 3) {
		cout << "The number is equal to 3!" << endl; 
	}
	else {
		cout << "Sorry! You have to enter something" << endl;
	}
	return 0; 
}
