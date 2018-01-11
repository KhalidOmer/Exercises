#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std; 

int generate_random_number(); 
int main () {
	return generate_random_number(); 
}

int generate_random_number(){
	srand(time(NULL));
	return rand()%50 + 1;  // the number is between 0 and 50 
	}
