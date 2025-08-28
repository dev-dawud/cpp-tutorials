// Variables & Data Types
// Variables store values in memory. You can reuse them throughout the program.

#include <iostream>
#include <string>   // needed for std::string

int main() {
	
	
    /* Declare and assign variables */
    
    int age = 17;                  // Integer (whole number)


    float temperature = 36.6f;     // Floating point number (single precision 32-bit)
    double pi = 3.14159265359;     // Floating point number (double precision 64-bit)
    // Tip: In modern C++ double is usually preferred because it's more precise

	double balance = 123.45;       // Another double (example: account balance)
    
    char myLetter = 'D';           // Character (a single symbol like '3' or '!')
    bool isStudent = true;         // Boolean (true or false)
    std::string name = "David";    // String (stores text)


    /* Output examples */
    
    std::cout << "My name is " << name << " and I'm " << age << " years old." << std::endl; // outputs string and integer
    
    std::cout << "Float example: temperature = " << temperature << std::endl;  // outputs float
    std::cout << "Double example: pi = " << pi << std::endl;   // outputs double

    std::cout << std::boolalpha; // makes bool print as "true/false" instead of 1/0
    std::cout << "Boolean example: " << isStudent << "\n";
    
    std::cout << "Balance example: " << balance << std::endl;

    return 0;
}

/*
YOUR TASK:

1. Create your own variables: favFood, favNum, and age
2. Print a sentence that includes all three
3. Add a variable 'result' that stores 8 divided by 3. (Tip: in your program you calculate by writing ... = 8 / 3)
   Try both as int and double to see the difference in precision
   
   Extra: use std::cout.precision(10) to print more decimal places
   
4. Print your sentence using std::cout

Good Luck ;)
*/

