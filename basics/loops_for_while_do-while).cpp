// Loops (for, while, do-while)
// Loops are used to repeat code multiple times

//  for loop: when you know how many times you want to repeat
//  while loop: when you repeat as long as a condition is true
//  do-while loop: similar to while, but runs at least once

#include <iostream>

int main() {
    
    
	/* FOR loop */
    std::cout << "FOR loop (counting 1 to 5):" << std::endl;
    for (int i = 1; i <= 5; i++) {   // i starts at 1, increases until it reaches 5
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;


    /* WHILE loop */
    std::cout << "WHILE loop (counting down from 5 to 1):" << std::endl;
    int j = 5;
    while (j > 0) {  // loop continues as long as j > 0
        std::cout << j << " ";
        j--;  // decrease j by 1
    }
    std::cout << std::endl << std::endl;


    /* DO-WHILE loop */
    std::cout << "DO-WHILE loop (runs at least once):" << std::endl;
    int k = 0;
    do {
        std::cout << "This will print once even though k = " << k << std::endl;
    } while (k != 0);  // condition is false, but the code ran once anyway

    return 0;
}

/*
YOUR TASK:

 - Use a FOR loop to print all numbers from 1 to 10.
 - Use a WHILE loop to ask the user for a number until they type 0.
 - Use a DO-WHILE loop to create a simple password check (ask until the correct password is typed).

Good Luck ;)
*/

