#include <iostream>

int main(){

    int input;
    std::string output;
    //
    // Get Input
    std::cout << "Enter a Number: ";

    // Checks for invalid input
    if (!(std::cin >> input)) {
            
        std::cout << "Invalid Input!" << std::endl;
        std::cout << "end" << std::endl;
        return 1;
    }

    // Create Output
    if(input % 5 == 0){ output += "Fizz";}
    if(input % 3 == 0){ output += "Buzz";}
    if(output == ""){ output = std::to_string(input);}

    // Print Output
    std::cout << output << std::endl;
    
    // Exit program
    std::cout << "end" << std::endl;
    return 0;
}
