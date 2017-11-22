#include <iostream>

using namespace std;

int main()
{

    //string name = "Khalid";
    //int age = 23;
    //cout << name << " is " << age << " years old. " << endl;

    string name_2;
    int age_2;
    cout << "Enter name_2: ";
    cin >> name_2;
    cout << endl << endl << "You entered: " << name_2 << endl;
    cout << "Enter age_2: ";
    cin >> age_2;
    cout << endl << endl << "You entered: " << age_2 << endl;

    char first_initial;
    char last_initial;

    cout << "Enter first initial: ";

    cin  >> first_initial;
    cout << endl << endl << " enter second initial: ";
    cin  >> last_initial;
    cout << endl<< endl<< "your initials are "<< first_initial << last_initial<< endl;
    return 0;
}
