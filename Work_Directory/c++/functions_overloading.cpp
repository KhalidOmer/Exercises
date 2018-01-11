#include <iostream>
#include <iomanip>
using namespace std; 

void print_salary(int ); 
void print_salary(double);
void print_salary(string); 
int main () {
	string salary; // there is a problem here since the input type
	// does not match the function's parameter type 
	// to solve this problem we use something called function overloading
	// the idea is the repeat the structre of the function over and over 
	// with changing the type of the fuction's paramter
	cout << "ENTER your salary: "; 
	getline(cin, salary); // getline works for strings not for other data types
	print_salary(salary);
	return 0; 
}
void print_salary(int x) {
	cout << endl << x << endl; 
}
void print_salary(double x) {
	cout << endl << x << endl; 
}
void print_salary(string x) {
	cout << endl << x << endl; 
}
//The command set precision can be of use when it comes double data type 
