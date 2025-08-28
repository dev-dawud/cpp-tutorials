// Vectors (std::vector)
// A vector is like a dynamic array: it can grow or shrink at runtime.
// You need to include the <vector> header.

#include <iostream>
#include <vector> // needed for std::vector
#include <string>

int main() {
	
    // Declare a vector of integers
    std::vector<int> numbers;

    // Add elements with push_back()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements (like an array)
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;

    // Changing a value
    numbers[2] = 99;
    std::cout << "Third element after change: " << numbers[2] << std::endl;


    // Loop through the vector using size()
    std::cout << "\nAll elements in vector: " << std::endl;
    
    
    for (int i = 0; i < numbers.size(); i++) {
    	
        std::cout << "Index " << i << " = " << numbers[i] << std::endl;
    }

    // Another vector example with strings
    std::vector<std::string> foods = {"Pizza", "Burger", "Sushi"};
    
    std::cout << "\nFavourite foods:" << std::endl;
    
    for (int i = 0; i < foods.size(); i++) {
    	
        std::cout << foods[i] << std::endl;
    }

    return 0;
}

/*
YOUR TASK:

 - Create a vector of doubles and add at least 3 decimal numbers.
 - Print them using a for loop.
 - Use push_back() to add another number and print the new vector.

GOOD LUCK ;)
*/

