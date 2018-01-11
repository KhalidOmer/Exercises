#include <iostream>
using namespace std; 

int main () 
{
	int a, b; 
	cout << "Enter two numbers a and b" << endl ;
	cout << "Enter a: ";  
	cin >> a; 
	cout << "Enter b: "  ; 
	cin >> b; 
	if (a >= 1 and b <= 10){
	switch (a and b) {
		case 1: if (a+b== 6){
		cout << "Love" << endl;} 
		case 2:
		if (b-a == 6){
		cout << "Love" << endl;} 
		case 3:
		if (a * b == 6) {
		cout << "Love" << endl;} 
		case 4:
		if (a / b == 6) { 
		cout << "Love" << endl;} 
	}
}
	else {
		cout << "Try another numbers!" << endl; } 
		return 0; 	
}

