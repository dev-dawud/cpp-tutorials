// Input/Output (cout, cin)
// You use cout to output text or values to the console (std::cout << "Pizza" -> Pizza)
// You use cin to input values from the console (typing a number and storing it in a variable)

#include <iostream>  // needed for std::cout and std::cin
#include <string>    // needed for std::string

int main() {
	
	
    int num1 = 0, num2 = 0, result = 0; // declare and initialize variables



    std::cout << "Please type a random number for num1: "; // ask the user for a number 
    std::cin >> num1;  // ">>" takes input from the console

    std::cout << "Your number was: " << num1 << std::endl; // outputs the first number
    
    
    
    std::cout << "Please type a random number for num2: "; // ask the user for another number
    std::cin >> num2;	// input again

    std::cout << "Your number was: " << num2 << std::endl;	// outputs the second number
	
	
    result = num1 + num2; // add the 2 numbers; result stores the outcome
    
    
    std::cout << "The sum of your two numbers is: " << result << std::endl;
	
	
    return 0;
}

/*
YOUR TASK:

1. Ask the user for their name (use std::string)
   Hint: std::cin >> name only reads until the first space
         If you want full names, use std::getline(std::cin, ...)

2. Ask the user for two decimal numbers (use double instead of int)
3. Output both numbers and the name
   Tip: you can chain multiple << operators, like:
        std::cout << "Hello " << name << ", number1 = " << num1 << std::endl;

4. Calculate and print:
   - the sum of the two numbers
   - the multiplication of the two numbers

Good Luck ;)
*/

