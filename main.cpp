#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <math.h>

void calc();
void pi();
void evalue();
void prime();
bool returnMenu();

int main() {
	bool loop = true;
	int input;

	while (loop == true) {
		std::cout << "Calculator" << '\n';

		std::cout << "1 - Basic Calculator" << '\n';
		std::cout << "2 - Find PI to Nth digit" << '\n';
		std::cout << "3 - Find e to the Nth digit" << '\n';
		std::cout << "4 - Prime Factorization" << '\n';

		std::cin >> input;
		if (input == 1) {
			calc();
		}
		else if (input == 2) {
			pi();
		}
		else if (input == 3) {
			evalue();
		}
		else if (input == 4) {
			prime();
		}

		loop = returnMenu();
	}
	return 0;
}

void calc() {
	double x, y;
	char oper;

	std::cout << "Enter your input in the form of x+y." << '\n';

	std::cin >> x >> oper >> y;
	if (oper == '+') {
		std::cout << x + y << '\n';
	}
	else if (oper == '-') {
		std::cout << x - y << '\n';
	}
	else if (oper == '*') {
		std::cout << x * y << '\n';
	}
	else if (oper == '/') {
		std::cout << x / y << '\n';
	}
	else
		std::cout << "Error";
}

void pi() {
	std::cout << "Enter number of decimals to calculate pi to:" << '\n';
	int num;
	std::cin >> num;
	double pi = acos(-1);
	std::cout << std::fixed;
	std::cout << std::setprecision(num) << pi << '\n';

}

void evalue() {
	std::cout << "Enter number of decimals to calculate e to:" << '\n';
	int num;
	std::cin >> num;
	double e = exp(1);
	std::cout << std::fixed;
	std::cout << std::setprecision(num) << e << '\n';
}

void prime() {
	std::cout << "Enter a number:" << '\n';
	int n;
	std::cin >> n;
	while (n % 2 == 0)
	{
		std::cout << 2 << " ";
		n = n/2;
	}

// n must be odd at this point. So we can skip
// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{
			std::cout << i << " ";
			n = n/i;
		}
	}

// This condition is to handle the case when n
// is a prime number greater than 2
	if (n > 2)
		std::cout << n << " ";

	std::cout << '\n';
	return;
}

bool returnMenu() {
	bool loop = true;
	while (loop == true) {
		std::cout << "Return to Menu? (y/n)" << '\n';
		char menu;
		std::cin >> menu;
		if (tolower(menu) == 'y') {
			loop = true;
			return loop;
		}
		else if (tolower(menu) == 'n') {
			loop = false;
			return loop;
		}
		else {
			std::cout << "Error. Please try again" << '\n';
			loop = true;
		}
	}
	return false;
}
