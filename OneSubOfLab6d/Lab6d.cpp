#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string promptForPassword();
void displayFile(const string& fileName);

int main()
{
	int attempts = 0;
	int maxAttempts = 3;
	string password;
	string correctPassword = "incorrect";
	string fileName;

	cout << "Enter the directory path to the file you want: ";
	cin >> fileName;

	while (attempts < maxAttempts)
	{
		password = promptForPassword();

		if (password == correctPassword)
		{
			cout << "Authentication is successful." << "\n\n";
			cout << "Content of File: " << endl;
			displayFile(fileName);
			break;
		}
		else
		{
			attempts++;

			cout << "Incorrect password. Please try again." << endl;
		}
	}

	if (attempts == maxAttempts)
	{
		system("cls");

		cout << "You have reached the maximum amount of attempts. "
			<< "Cannot proceed with the request." << endl;
	}

	return 0;
}

string promptForPassword()
{
	string password;

	cout << "Enter your password: ";
	cin >> password; //getline should be used here if including spaces 

	return password;
}

void displayFile(const string& fileName)
{
	ifstream file(fileName);

	if (file.is_open())
	{
		string text;
		getline(file, text); //only gets a single line (use a loop for multiple-line files) 

		cout << text << endl;

		file.close();
	}
	else
	{
		cout << "Error. Unable to open this file." << endl;
	}
}