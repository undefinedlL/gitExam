#include "EmailValidator.h"
#include "NameValidator.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	string name, email;

	cout << "Enter your name: ";
	cin >> name;

	if (isValidName(name)) {
		cout << "Name is valid";
	}
	else {
		cout << "Name is invalid";
	}

	
	cout << "Enter your email: ";
	cin >> email;

	if (isValidEmail(email)) {
		cout << "Email is valid";
	}
	else {
		cout << "Email is invalid";
	}

	return 0;
}