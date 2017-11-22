#include <iostream>
using namespace std; 

int main ()
{
	char grade; 
	cout << "Enter Grade: " ; 
	cin >> grade; 
	switch (grade){
		case 'A' : 
		cout << "Excellent!" << endl; 
		break; 
		case 'B' :
		case 'C' : 
		cout << "Well done!" << endl;
		break; 
		case 'F' : 
		cout << "Give it more effort!" << endl;
		break;
		case 'D' : 
		cout << "You passed!" << endl;
		default :
		cout << "Invalid input" << endl; 
		break; 
	}
	cout << "Your grade is " << grade << endl;  
	return 0; 
}  
