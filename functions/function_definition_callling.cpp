// Function Definition & Calling
// Functions are used to shorten your code and to reuse it multiple times.

#include <iostream>

// Function declarations
void iLikePizza(); // declaration: void = function returns no value

// You can also define a function directly:
void otherFunction() {
    std::cout << "Here you can declare and define the function at the same time." << std::endl;
}

void quotient();

int main() {  // main() is also a function: this is where the program starts
    
    iLikePizza();  // call the function
    iLikePizza();
    iLikePizza();
    iLikePizza();

    std::cout << std::endl;

    otherFunction(); // call another function
	
	quotient();
	
    return 0;	
}

// Function definition (the code itself)
void iLikePizza() {
    std::cout << "I like Pizza in case you didn't know :)" << std::endl;
}

void quotient(){
	
	double a = 8;
	double b = 10;
	double c;
	
	c = a / b;
	std::cout << std::endl << c;
	
}


