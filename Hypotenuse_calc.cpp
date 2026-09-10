#include <iostream> 
#include <cmath>

using dec = double;

int main() {

    // basic introduction and instructions for the user
    std::cout << "Hypotenuse calculator" << std::endl;
    std::cout << "insert the length of both the opposite:op and adjacent:aj when asked" << '\n';

    // calculations part 1 (adjacent)
    dec aj;
    std::cout << "aj = " << std::endl;
    std::cin >> aj; 
    aj *= aj;

    // calculations part 2 (opposite)
    dec op;
    std::cout << "op = " << "\n";
    std::cin >> op; 
    op *= op;

    // calculations part 3 (final answer)
    dec hyp; 
    std::cout << "using the formula: hyp = sqrt(aj^2 + op^2)" << std::endl;
    hyp = std::sqrt(op+aj); 
    std::cout << "hyp = " << hyp << " meters" << std::endl;

    return 0;
}