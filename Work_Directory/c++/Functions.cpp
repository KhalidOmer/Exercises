#include <iostream> 

using namespace std; 

void print_hello()
{
	cout << "Hello World!" << endl; 
	}
double get_age(){
	double age = 25.0;
	return age; 
}

string get_name(){
	return "Khalid"; 
}
int main () 
 {
	print_hello();
	cout << get_name() << " is " << get_age() << " years old " << endl; 
	return 0;
 
  }
 
