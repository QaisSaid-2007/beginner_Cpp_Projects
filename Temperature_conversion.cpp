#include <iostream> 
#include <string>

typedef std::string str;

int main() {
    // variables
    char unit;
    double temp; 
    str new_unit;

    // Introduction
    std::cout << "***** Temperature conversion *****" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;

    // data collection
    std::cout << "type in the temperature = ";
    std::cin >> temp; 
    std::cout << "What unit would you like to convert to -> ";
    std::cin >> unit;

    // conversion 
    if (unit == 'F' || unit == 'f') {
        temp = (1.8 * temp) + 32.0;
        new_unit = "Fahrenheit";
    }
    else if (unit == 'C' || unit == 'c') {
        temp = (temp - 32) / 1.8;
        new_unit = "Celsius";
    }
    else {
        std::cout << "invalid temperature unit" << std::endl;
        return 1;
    }

    // output
    std::cout << "answer = " << temp << " " << new_unit << std::endl;

    return 0;
}
