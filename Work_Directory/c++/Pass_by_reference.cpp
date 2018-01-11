#include <iostream>
// The idea of this tutorial is to learn that functions 
// also can declared above the main function 

using namespace std; 
void print_age(int &x);

int main () 
{
	int age = 25; 
	print_age(age);
	cout << age; 
	// it can be seen that the functions does not affect the age value
	// the age remains as it is out side the function
	// if we want the funcion to change the value of "age" every where
	// in this case we have to get into the memory address of the value
	// in this case we add an ambersand "&" to the parameter in the function
	return 0; 
}
void print_age(int &x){
	x = 35;
	cout << x << endl; 
}
