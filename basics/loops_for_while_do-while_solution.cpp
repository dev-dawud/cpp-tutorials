// Loops (for, while, do-while) - Sample Solutions

#include <iostream>
#include <string>

int main() {
	
	
    /* 1. FOR loop: print all numbers from 1 to 10 */
    std::cout << "FOR loop (1 to 10):" << std::endl;
    
    for (int i = 1; i <= 10; i++) {
        
		std::cout << i << " ";
		
    }
    
    std::cout << std::endl << std::endl;

    
	/* 2. WHILE loop: ask the user for numbers until they type 0 */
    
	int num;
	
	std::cout << "WHILE loop (type numbers, 0 to stop):" << std::endl;
    std::cin >> num;
    
    while (num != 0) {  
    
        std::cout << "You typed: " << num << std::endl;
        std::cin >> num;
        
    }
    
	std::cout << "Loop ended because you typed 0." << std::endl << std::endl;

   
    /* 3. DO-WHILE loop: simple password check */
    
	std::string password;
    std::string correctPassword = "pizza123"; // sample password

    std::cout << "DO-WHILE loop (password check):" << std::endl;
    
    do {
    	
        std::cout << "Enter the password: ";
        std::cin >> password;
        
    } while (password != correctPassword);

    std::cout << "Access granted!" << std::endl;

    return 0;
}

