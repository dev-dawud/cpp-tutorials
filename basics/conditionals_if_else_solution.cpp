#include <iostream>

int main() {
	
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
    	
        std::cout << "Please enter not a negative number.\n";
    }
    else if (num == 0) {
    	
        std::cout << "Zero is neither even nor odd.\n";
    }
    else if (num % 2 == 0) {  // modulo operator -> remainder after division by 2
    
        std::cout << "Your number is even.\n";
    }
    else {
    	
        std::cout << "Your number is odd.\n";
    }

    return 0;
}

