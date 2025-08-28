// Conditionals (if, else, switch) part 1
// Use if/else when a decision has to be made
// If a condition is true -> one branch runs, otherwise another

#include <iostream>

int main() {
	
    int userAge;

    std::cout << "How old are you ? (only 18 and above allowed): ";
    std::cin >> userAge;

    if (userAge >= 18) {  // checks if user is at least 18 years old
    
        std::cout << "Congrats, you're over 18!\n";
    } 
    else if (userAge < 0) {  // checks if input is invalid (negative number)
    
        std::cout << "Please use a valid number (>= 0)\n";
    } 
    else { // runs when userAge is between 0 and 17
    
        std::cout << "Sorry, you're not allowed because you're under 18!\n";
    }

    return 0;
}

/*
YOUR TASK:

1. Ask the user for a number (int)
2. If the number is even -> print "Your number is even"
   Hint: use the modulo operator: if (num % 2 == 0) ...
3. If the number is odd  -> print "Your number is odd"

Bonus:
- Add a check for negative numbers: "Please enter a non-negative number".

GOOD LUCK ;) 
*/

