// Conditionals (if, else, switch) part 2
// Another conditional type is a switch statement
// You often use it for menus or many successive decisions

#include <iostream>

int main() {
	
    int decision;

    std::cout << "***************************************\n\n";
    std::cout << "1. About me\n";
    std::cout << "2. Project\n";
    std::cout << "3. Credits\n";
    std::cout << "\n***************************************\n\n";
    
    std::cout << "Choose an option: ";

    std::cin >> decision; // this is where the option is saved

    switch (decision) { // here it checks what you have typed in 
        case 1: 
            std::cout << "Hello, my name is David. I'm 17 years old and I like pizza a lot.\n";
        break;

        case 2: 
            std::cout << "In this project you will learn the switch condition, and later much more. Stay focused and have fun!\n";
        break;

        case 3:
            std::cout << "Credits: Written in C++\n";
        break;

        default: // runs if the input is not 1–3
            std::cout << "Invalid choice. Please select 1, 2, or 3.\n";
        break;
    }

    return 0;
}

/*
YOUR TASK:

1. Create a snack machine with:
   - 1: Snickers
   - 2: Twix
   - 3: Pizza
   - 4: Cola

2. Use a switch to print the correct snack
3. Always add a default case for invalid input

Bonus:
- Let the program print "Enjoy your snack!" after each valid choice

GOOD LUCK ;)
*/

