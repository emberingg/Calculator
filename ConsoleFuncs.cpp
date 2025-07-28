#include <iostream>
#include <cstdlib>   
#include <limits> 
#include "consolefunc.h"
using std::cout, std::string, std::cin;


void ClearConsole() {
    std::cout << "\nPress Enter Twice to return to the main screen...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin.get(); 

    system("cls"); 
}

void Commands() {
    cout << "=======================\n";
    cout << "=    1:  ADDITION     =\n";
    cout << "=======================\n";
	cout << "=    2:  SUBTRACTION  =\n";
	cout << "=======================\n";
	cout << "=  3:  MULTIPLICATION =\n";
	cout << "=======================\n";
	cout << "=    4:  DIVISION     =\n"; 
	cout << "=======================\n";
}

void Exit() {
    cout << "Exiting program...\n";
    exit(0);
}   


