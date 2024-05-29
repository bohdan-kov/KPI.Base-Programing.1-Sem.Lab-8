#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int main()
{
    char myString[] = "Lorem Ipsum is s[imply dummy text.";
    char myString_2[] = "Lorem Ipsum ha]s been the industry's standard dummy text ever since the 1500s";

    cout << "Example 1 (Len String): ";
    cout << strlen(myString) << endl << endl;

    cout << "Example 2 (Search for the first non-character segment): ";
    cout << strcspn(myString, myString_2) << endl << endl; 

    cout << "Example 3 (Search for the last input of a given character): ";
    char* inp_givChar = strrchr(myString, '[');
    cout << inp_givChar << endl << endl;

    cout << "Example 4 (Comparison lines): ";
    if (strcmp(myString, myString_2) == 0)
        cout << "Yes" << endl << endl;
    else 
        cout << "No" << endl << endl;

    cout << "Example 5 (Converting a string to an integer): ";
    cout << atoi("14124") << endl;
}
    