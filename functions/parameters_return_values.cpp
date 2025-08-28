// Parameters & Return Values
// Parameters are placeholders in functions and can be replaced with numbers or variables.
// Return values give you a specific result back (5 + 5 = 10 -> 10 is the return value)

#include <iostream>

// Function declaration
double addition(double a, double b);

int main() {
	
    double firstNum, secondNum;

    std::cout << "Please enter the first number: ";
    std::cin >> firstNum;  // store input in variable

    std::cout << "Please enter the second number: ";
    std::cin >> secondNum; // store input in variable
    
    // Call the function and save the return value
    double result = addition(firstNum, secondNum);

    // Outputs the result
    std::cout << "The sum of your two numbers is: " << result << std::endl;

    return 0;
}

// Function definition
double addition(double a, double b) {
	
    return a + b;  // returns the result to the caller
}

/*
YOUR TASK:

 - Make a simple calculator that can add, subtract, divide and multiply numbers
 - The user should decide the operation with +, -, * or /

GOOD LUCK ;)
*/

