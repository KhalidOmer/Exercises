#include <iostream>

using namespace std; 

int main () {
	int n,i;
	for (n = 2; n <= 100; ++n) {  
		for (i = 2 ; i <= n/2; ++i) {
		if (n % i == 0) {
			cout << n << "is not a prime number" << endl; 
			}
		else { cout << n << "is a prime number" << endl; }
		}
	}
		return 0; 
}
