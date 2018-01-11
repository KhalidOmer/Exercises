#include <iostream>

using namespace std; 

string print_name(string name) {
	return name; 
}

int get_age (double age){
	return age; 
}
int main ()
{
	string name; 
	double age; 
	cout << "Enter a name: "; 
	cin >> name; 
	cout << "\n\nEnter an age: "; 
	cin >> age; 
	cout << "\n\n\nYour name is "<< print_name(name)<< " and You are " <<
	get_age (age) << " years old."; 
	return 0; 
}
