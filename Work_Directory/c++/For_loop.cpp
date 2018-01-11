#include <iostream>
using namespace std; 
int main ()
{
	int index;
	int value = 0;  
	for (index = 0; index < 10; index ++){
		// in the middle lies the condition of the loop
		// on the far left we declared the index, on the far left
		// we gave the guide for what is going to happen latter on 
		value += 5;
		cout << value << endl; 
		//cout << index << endl; 
		}
	return 0;
}

