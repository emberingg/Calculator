#include <iostream>
#include "equationfunc.h"
#include <cstdlib>   
#include <limits>    
using std::cout, std::cin;

void Addition() {
    int a, b, answer{};
    std::cout << "Enter Number 1: ";
    std::cin >> a;

    std::cout << "Enter Number 2: ";
    std::cin >> b;

    answer = a + b;
    cout << "Answer: " << answer << "\n";
}

void Subtraction() {
	int a, b, answer{};

    std::cout << "Enter Number 1: ";
    std::cin >> a;

    std::cout << "Enter Number 2: ";
    std::cin >> b;

    answer = a - b;
	cout << "Answer: " << answer << "\n";

}

void Multiplication() {
    int a, b, answer{};

    std::cout << "Enter Number 1: ";
    std::cin >> a;

    std::cout << "Enter Number 2: ";
    std::cin >> b;

    answer = a * b;
    cout << "Answer: " << answer << "\n";



}

void Division() {

    double a, b, answer{};

    std::cout << "Enter Number 1: ";
    std::cin >> a;

    std::cout << "Enter Number 2: ";
    std::cin >> b;

    answer = a / b;
    cout << "Answer: " << answer << "\n";

}
