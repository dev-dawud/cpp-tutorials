// Function Overloading
// You can create multiple functions with the same name as long as their parameters are different.
// The compiler will automatically choose the right version depending on the arguments you pass.

#include <iostream>

// Function declarations
int add(int a, int b);           // adds two integers

double add(double a, double b);  // adds two doubles

std::string add(std::string a, std::string b); // "adds" two strings

int main() {
	
    int intResult = add( 3 , 3 );                   // calls the int version
    
    double doubleResult = add( 3.5 , 3.5 );         // calls the double version
    
    std::string stringResult = add("Hello, ", "World!"); // calls the string version

    std::cout << "Integer result: " << intResult << std::endl;
    std::cout << "Double result: " << doubleResult << std::endl;
    std::cout << "String result: " << stringResult << std::endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
	
    return a + b;
}

double add(double a, double b) {
	
    return a + b;
}

std::string add(std::string a, std::string b) {
	
    return a + b;
}

/*
YOUR TASK:

- Create an overloaded function called multiply:
    -> one version that multiplies two ints
    -> one version that multiplies two doubles
- Test both versions in main().

GOOD LUCK ;)
*/

