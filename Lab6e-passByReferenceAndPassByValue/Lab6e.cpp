#include <iostream>

using namespace std;

void printByValue(int a);
void printByReference(int& a);

int main()
{
	int x = 8;

	cout << "Print by value..." << endl;
	printByValue(x);


	cout << "Address of the variable I have passed onto this function: " << &x << "\n\n";
	
	
	cout << "Print by referece..." << endl;
	printByReference(x);
	cout << "Address of the variable I have passed onto this function: " << &x << endl;

	return 0;
}

void printByValue(int a)
{
	cout << "Value of the number: " << a << endl;
	cout << "Address of the variable: " << &a << endl;
}

void printByReference(int& a)
{
	cout << "Value of the number: " << a << endl;
	cout << "Address of the variable: " << &a << endl;
}