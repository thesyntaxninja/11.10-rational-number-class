// 11.10 main.cpp
// Description: Problem 2 of 2 due week 3
// Programmer: Parker Esmay
// Date: 02/09/2015

#include <iostream>
#include <conio.h>
#include "rationalNumber.h"

using namespace std;

int main(int argc, char** argv) 
{
	RationalNumber first(15, 2);
	RationalNumber second(8, 6);
	RationalNumber value;
	
	// Test addition
	cout << "Addition: ";
	first.print();
	cout << " + ";
	second.print();
	cout << " = ";
	value = first + second;
	value.print();
	cout << "\n";
	
	// Test subtraction
	cout << "Subtraction: ";
	first.print();
	cout << " - ";
	second.print();
	cout << " = ";
	value = first - second;
	value.print();
	cout << "\n";
	
	//Test multiplication
	cout << "Multiplication: ";
	first.print();
	cout << " x ";
	second.print();
	cout<< " = ";
	value = first * second;
	value.print();
	cout << "\n";
	
	//Test division
	cout << "Division: ";
	first.print();
	cout << " / ";
	second.print();
	cout << " = ";
	value = first / second;
	value.print();
	cout << "\n";
	
	//Test overloaded realtional and equality operators
	cout << "Compare: ";
	first.print();
	cout << " is ";
	cout << ((first > second) ? "> " : "<= ");
	second.print();
	
	cout << "\nCompare: ";
	second.print();
	cout << " is ";
	cout << ((second < first) ? "< " : ">= ");
	first.print();
	
	cout << "\nCompare: ";
	first.print();
	cout << " is ";
	cout << ((first >= second) ? ">= " : "< ");
	second.print();
	
	cout << "\nCompare: ";
	second.print();
	cout << " is ";
	cout << ((second <= first) ? "<= " : "> ");
	first.print();
	
	cout << "\nCompare: ";
	first.print();
	cout << " is ";
	cout << ((first == second) ? "== " : "!= ");
	second.print();
	
	cout << "\nCompare: ";
	second.print();
	cout << " is ";
	cout << ((second != first) ? "!= " : "== ");
	first.print();
	cout << "\n\n";
	
	getch();
	
	//Test prevention of 0 denominator
	//RationalNumber three (20, 0);
	
	//Test prevention of negative denominator
	RationalNumber four(15, -5);
	
	return 0;
}
