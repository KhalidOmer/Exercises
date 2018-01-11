#include <iostream>

using namespace std; 

int main () 
{
	// declaring the sides, hight and the base  
	double a,c, h,B; 
	// the sum of the sides
	cout << "Enter the side length: " << endl ;
	cout << "Enter a: ";  
	cin >> a;
	cout  << "Enter c: " ; 
	cin >> c; 
	double S = a + c; 
	cout << "Enter the base and the hight length's: "<< endl ; 
	cout << "Enter the base length: "; 
	cin >> B;
	cout << "Enter the hight: "; 
	cin  >> h;
	double area = 0.5 * B * h; 
	if (area == S) { 
		cout << "It is equable!"; }
	else {
		cout << "It is not equable";} 
	return 0; 
}
