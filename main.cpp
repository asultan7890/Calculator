#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
using namespace std;

void calc();

int main() {
	cout << "Calculator" << endl;

	cout << "1 - Basic Calculator" << endl;
	cout << "2 - Find PI to Nth digit" << endl;
	cout << "3 - Find e to the Nth digit" << endl;

	int input;
	cin >> input;
	if (input == 1){
		calc();
	}
	else if (input == 2){
		//pi();
	}

	cout << "Return to Menu? (y/n)" << endl;
	char menu;
	cin >> menu;


	return 0;
}

void calc() {
	int x, y;
	char oper;

	cin >> x >> oper >> y;
	cout << endl;
	if (oper == '+') {
		cout << x + y << endl;
	}
	else if (oper == '-') {
		cout << x - y << endl;
	}
	else if (oper == '*') {
		cout << x * y << endl;
	}
	else if (oper == '/') {
		cout << x / y << endl;
	}
	else
		cout << "Error";

}
