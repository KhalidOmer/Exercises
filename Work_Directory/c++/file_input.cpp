#include <iostream>
#include <fstream>

using namespace std; 

int main () 
{
	const int SIZE = 7; 
	string names_list[SIZE] = {""}; 
	string temp_name; 
	ifstream input_file("names.txt");
	if(!input_file) { 
		cout << "File not found." << endl; 
		return -6;  
	}
	//Pre-Read 
	int index = 0;
	input_file >> temp_name; 
	while (!input_file.eof()){ 
		names_list[index] = temp_name;
		index++;
		// post read
		input_file >> temp_name; 
		}
	for (int i = 0; i < SIZE;i++) {
		cout << names_list[i] << endl; 
		}  
	return 0; 
}
