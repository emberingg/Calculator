#include <iostream>
#include <string>
#include "equationfunc.h";
#include "consolefunc.h";

using std::cout, std::string, std::cin;

int main() {
	
	while (true) {

		string command;
		cout << "=======================\n";
		cout << "Welcome to Ember's Calculator!\n";
		cout << "=======================\n";
		cout << "Available Commands:\n";
		cout << "1: Addition\n";
		cout << "2: Subtraction\n";
		cout << "3: Multiplication\n";
		cout << "4: Division\n";
		cout << "=======================\n";
		cout << "Type 'commands' to see available options.\n";
		cout << "Type 'exit' to exit the program.\n";
		cout << "=======================\n";
		cout << "Enter Command: \n";
		getline(cin, command);



		if (command == "commands") {
			Commands();
			ClearConsole();
		}
		else if (command == "1") {
			Addition();
			ClearConsole();
		}
		else if (command == "2") {
			Subtraction();
			ClearConsole();
		}
		else if (command == "3") {
			Multiplication();
			ClearConsole();
		}else if(command == "4") {
			Division();
			ClearConsole();
		}
		else if (command == "exit") {
			Exit();
			ClearConsole();
			break;
		}
		else {
			cout << "Invalid command. Type 'commands' to see available options.\n";
		}
	}
}