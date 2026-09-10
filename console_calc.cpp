#include <iostream> 

int main() {
    // defining the math variables
    char operation;
    double num1;
    double num2;
    double result;
    
    // collection the informations from the user
    std::cout << "*************** CALCULATOR ***************" << std::endl; 
    std::cout << "Pick the operation by typing it (+),(-),(/), or (*). -> ";
    std::cin >> operation;
    std::cout << "num1 = ";
    std::cin >> num1;
    std::cout << "num2 = ";
    std::cin >> num2;

    // calculations
    switch (operation) {
        case '+':
            result = num1 + num2;
            break; 
        case '-':
            result = num1 - num2; 
            break; 
        case '*':
            result = num1 * num2; 
            break; 
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } 
            else {
                std::cout << "zero division error" << std::endl; 
                return 1;
            }
            break;
        default:
            std::cout << "invalid operation" << std::endl;
            return 1;
    }

    // displaying the results
    std::cout << "*************** ANSWER ***************" << std::endl;
    std::cout << "num1 " << operation << " num2" << " = x" << std::endl;
    std::cout << num1 << " " << operation << " " << num2 << " = x" << std::endl;
    std::cout << "x = " << result << std::endl;

    return 0;
}