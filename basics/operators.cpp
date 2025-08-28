// Operators
// Operators are symbols that let you perform operations on variables and values
// Categories: arithmetic, comparison, logical

#include <iostream>

int main() {
	
	
    int a = 10, b = 3;   // two integers for arithmetic operations


    /* Arithmetic operators */
    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl; // addition
    std::cout << "a - b = " << (a - b) << std::endl; // subtraction
    std::cout << "a * b = " << (a * b) << std::endl; // multiplication
    std::cout << "a / b = " << (a / b) << " (integer division)" << std::endl; 
    std::cout << "a % b = " << (a % b) << " (remainder)" << std::endl;


    /* Comparison operators */
    std::cout << std::boolalpha; // print bools as true/false instead of 1/0
    std::cout << "\nComparison Operators:" << std::endl;
    std::cout << "a == b ? " << (a == b) << std::endl; // equal
    std::cout << "a != b ? " << (a != b) << std::endl; // not equal
    std::cout << "a > b ? " << (a > b) << std::endl;   // greater than
    std::cout << "a < b ? " << (a < b) << std::endl;   // less than
    std::cout << "a >= b ? " << (a >= b) << std::endl; // greater or equal
    std::cout << "a <= b ? " << (a <= b) << std::endl; // less or equal


    /* Logical operators */
    bool x = true, y = false;
    
    std::cout << "\nLogical Operators:" << std::endl;
    std::cout << "x && y = " << (x && y) << " (AND)" << std::endl;
    std::cout << "x || y = " << (x || y) << " (OR)" << std::endl;
    std::cout << "!x = " << (!x) << " (NOT)" << std::endl;


    return 0;
}

/*
YOUR TASK:

1. Ask the user for two numbers (use int)
2. Print out the results of +, -, *, /, and %

Good Luck ;)
*/

