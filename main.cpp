#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <math.h>
using namespace std;

void calc();
void pi();
void evalue();
bool returnMenu();

int main() {
	bool loop = true;
	while (loop == true){
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
			pi();
		}
		else if (input == 3){
			evalue();
		}

		loop = returnMenu();
	}
	return 0;
}

void calc() {
	int x, y;
	char oper;

	cout << "Enter your input in the form of x+y." << endl;

	cin >> x >> oper >> y;
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

void pi(){
	cout << "Enter number of decimals to calculate pi to:" << endl;
	int num;
	cin >> num;
	double pi = acos(-1);
	cout << fixed;
	cout << setprecision(num) << pi << endl;

}

void evalue(){
	cout << "Enter number of decimals to calculate e to:" << endl;
	int num;
	cin >> num;
	double e = exp(1);
	cout << fixed;
	cout << setprecision(num) << e << endl;
}
bool returnMenu() {
	bool loop = true;
	while (loop == true){
		cout << "Return to Menu? (y/n)" << endl;
		char menu;
		cin >> menu;
		if (tolower(menu) == 'y'){
			loop = true;
			return loop;
		}
		else if (tolower(menu) == 'n'){
			loop = false;
			return loop;
		}
		else {
			cout << "Error. Please try again" << endl;
			loop = true;
		}
	}
	return false;
}
