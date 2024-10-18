// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;

    cout << "Name: " << flush;
    cin >> str;

    cout << endl;
    cout << "Hello " << str << " nice to meet you";

    cout << endl << endl;
    return (0);
}
