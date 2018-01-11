#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std; 

int main ()
{
	const int SIZE = 8; 
	string names_list[SIZE];
	string temp; 
	int index = 0; 
	ifstream input_file("names.txt"); 
	if (!input_file){
		cout << "Unable to find file.";
		return -7; 
		}
	input_file.ignore(255,'\n');// The '255' has to do with c++ console
	getline(input_file, temp); // with this function we are including the whole line
	//input_file >> temp; 
	while(!input_file.eof()) {
		names_list[index] = temp; 
		index++;
		getline(input_file, temp);  
		//input_file >> temp;
		}
		
		for (int i = 0; i < SIZE; i++) {
			cout << names_list[i] << endl; }
			
	cout << endl << endl << "This is a new line character:\n\n"; 
	cout << endl << endl << "This is a tab character: \t\t\tTab\n\n";
	cout << endl << endl << "This is a quote: " << " \"Quote\" \n\n" ;
	cout << left << setprecision(3) << fixed;  //It has to do with numbers with deciaml places
	double double_value = 20.35345; // the "fixed" says pick that precision and only apply it after the decimal. 
	cout << double_value << endl; 
	int integer = 343; 
	cout << endl << endl<< endl; 
	cout << setw(23) << double_value << setw(23) << integer << endl; 
	// This sets the width between the inputs to the argument of the function "setw()   
	return 0; 
	}
