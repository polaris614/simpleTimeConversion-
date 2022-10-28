//============================================================================
// Name        : c++2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include <sstream>
using namespace std;

void displayMenu() {
	cout << "1. Hour to Minute" << endl;
	cout << "2. Minute to Second" << endl;
	cout << "3. Second to Minute" << endl;
	cout << "4. Minute to Hour" << endl;
	cout << "Enter your choice: " << flush;
}

double getNumber() {
	double no;
	cout << ">" << flush;
	cin >> no;
	return no;
}

double multBy60(double number) {
	return number*60;
}

double divBy60(double number) {
	return number/60;
}

int main() {

	int x;
	displayMenu();
	cin >> x;
	double number = getNumber();

	switch(x) {
	case 1:
		cout << multBy60(number) << " minutes" << endl;
		break;
	case 2:
		cout << multBy60(number) << " seconds" << endl;
		break;
	case 3:
		cout << divBy60(number) << " minutes" << endl;
		break;
	case 4:
		cout << divBy60(number) << " hours" << endl;
		break;
	default:
		cout << "Please enter a valid choice..." << endl;
	}

	return 0;
}
