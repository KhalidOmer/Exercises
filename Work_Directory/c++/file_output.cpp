#include <iostream>
#include <fstream> //here another librray is include file stream 
using namespace std; 
int main () 
{
	ofstream output_file ("names.txt"); // of stands for an output file 
	if(!output_file){
		cout<< "The file could not be created." << endl; 
		return -1; 
	}
	string name = "Hi! My name is Khalid.";
	output_file << name << endl; 
	output_file << "I'm trying to learn c++, it seems a little bit complicated but I'm enjoying it!";  
	return 0;
}
