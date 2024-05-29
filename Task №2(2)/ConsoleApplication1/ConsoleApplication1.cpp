#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Example 1 (Input text) ";
    cout << "Your text: ";
    string text;
    getline(cin, text);
    cout << text << endl << endl;

    cout << "Example 2 (Assignment) ";
    cout << "Enter the index number: ";
    string stext;
    stext = string("New Test");
    cout << endl << stext << endl << endl;

    cout << "Example 3 (Text length) ";
    cout << "Text length: ";
    cout << endl << text.length() << endl << endl;

    cout << "Example 4 (Inserting symbols) ";
    cout << "Input insert text: ";
    string textInsert;
    getline(cin, textInsert);
    textInsert.insert(1, string("TEST INSERT"));
    cout << endl << textInsert << endl << endl;


    cout << "Example 5 (Concatenation text) ";
    string lastName;
    string firstName;
    cout << "Your Last Name: ";
    getline(cin, lastName);
    cout << "Example 4 (Concatenation text) ";
    cout << "Your First Name: ";
    getline(cin, firstName);
    cout << "Hello! " + lastName + " " + firstName << endl;



}
