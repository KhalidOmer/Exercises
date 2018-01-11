#include <iostream> 
using namespace std; 
int main () 
{
	int choice;
	double number_1, number_2; 
	cout << "1) Addition" << endl; 
	cout << "2) Subtraction"<< endl;
	cout << "3) Multiplication"<< endl; 
	cout << "4) Division"<< endl; 
	cout << endl << endl << "Enter a choice: "; 
	cin >> choice; 
	switch(choice){
		case 1:{ cout << "Enter number 1: ";
			cin >> number_1;
			//cout<< endl; 
			cout << "Enter number 2: ";
			cin >> number_2;
			cout<< endl; 
			cout << "Result = " << number_1 + number_2; 
			break;}
		case 2:{  cout << "Enter number 1: ";
			cin >> number_1;
			//cout<< endl << endl<< endl; 
			cout << "Enter number 2: ";
			cin >> number_2;
			cout<< endl; 
			cout << "Result = " << number_1 - number_2; 
			break;}
		case 3:{  cout << "Enter number 1: "<< endl;
			cin >> number_1;
			//cout<< endl << endl<< endl; 
			cout << "Enter number 2: ";
			cin >> number_2;
			cout<< endl; 
			cout << "Result = " << number_1 * number_2; 
			break;}
		case 4:{  cout << "Enter number 1: ";
			cin >> number_1;
			//cout<< endl << endl<< endl; 
			cout << "Enter number 2: ";
			cin >> number_2;
			cout<< endl; 
			cout << "Result = " << number_1 / number_2; 
			break;}
		default: cout << "Exiting: You entered a wrong choice" << endl; 
		
		}
	return 0; 
}
