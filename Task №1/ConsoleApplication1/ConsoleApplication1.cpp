#include <iostream>
#include <string>
#include <cstring>

using namespace std;


char inp_str[255];


void repet() {
	cout << endl << "Repeat in the word: ";
	for (int i = 0; i < strlen(inp_str); i++) {
		if (inp_str[i] == inp_str[i + 1])
			cout << inp_str[i];
		if (inp_str[i] == inp_str[i - 1] && inp_str[i] != inp_str[i + 1]) {
			cout << inp_str[i] << endl;
		}
	}
}

void char_extr() {
	cout << "A word without repetition: ";
	for (int i = 0; i < strlen(inp_str); i++) {
		if (inp_str[i] != inp_str[i + 1])
			cout << inp_str[i];
	}
}

void break_word(string inp_string) {
	cout << endl << "Break into warehouses: ";
	for (int i = 0; i < inp_string.length(); i++) {
		cout << inp_string[i];
		if (inp_string[i] == 'a' || inp_string[i] == 'e' || inp_string[i] == 'o' || inp_string[i] == 'u')
			cout << '-';
	}
	cout << endl;
}

void search_long() {
	string dateString(inp_str);
	string tmpString = "";
	string maxString = "";

	for (int i = 0; i < strlen(inp_str); i++) {
		tmpString += inp_str[i];
		if (inp_str[i] == ' ') {
			if (tmpString.length() > maxString.length()) {
				maxString = tmpString;
			}
			tmpString = "";
		}		
	}
	if (tmpString.length() > maxString.length()) {
		maxString = tmpString;
	}

	break_word(maxString);

	cout << endl << "Max String len: " << maxString << endl;
}


int main()
{	
	cout << "Enter your text: ";
	cin.getline(inp_str, 255);

	repet();
	cout << endl;
	char_extr();
	cout << endl;
	search_long();
}
