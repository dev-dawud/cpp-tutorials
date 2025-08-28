// Simple Arrays
// Arrays are used to store multiple values of the same type in one variable.
// Index starts at 0 (so the first element is at position 0).

#include <iostream>

int main() {
	
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing elements
    std::cout << "First element (index 0): " << numbers[0] << std::endl;
    std::cout << "Third element (index 2): " << numbers[2] << std::endl;

    // Changing a value
    numbers[4] = 99;
    std::cout << "Last element after change: " << numbers[4] << std::endl;

    for (int i = 0; i < 5; i++) {
        
		// inside the loop:
        // numbers[i] accesses the element at index i
        // at first run i=0 -> numbers[0] = 10
        // second run i=1 -> numbers[1] = 20
        // ... until i=4 -> numbers[4] = 50
        
		std::cout << "Index " << i << " = " << numbers[i] << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

/*
YOUR TASK:

- Create a string array with 3 of your favourite foods
- Print them one by one using a for loop

GOOD LUCK ;)
*/

