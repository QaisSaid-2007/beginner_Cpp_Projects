#include <iostream> 
#include <string> 

using str = std::string; 

namespace Rules {
    str r1 = "You will first be asked to choice the difficulty mode. [easy, medium or hard]";
    str r2 = "You can also ask for hints if needed by only typing the letter (H/h)";

}

int main() {
    // introduction + instructions
    std::cout << "***** Welcome to our guess the number game *****" << std::endl;
    std::cout << "*************** Game instructions ***************" << std::endl;
    using namespace Rules;
    std::cout << r1 << "\n" << r2 << std::endl;

    // unser's answers 
    char mode; 
    std::cout << "e for easy, m for medium and h for hard" << std::endl;
    std::cout << "mode = ";
    std::cin >> mode;

    // the game
    switch (mode) {
        case 'e':
        case 'E': {
            int secret_num = 8;
            str hints = "the number is even and its greater than 5 but less than 10 ";

            std::cout << "one of these values is the secret number, can you guess it ?" << std::endl;
            for (int i = 0 ; i <= 10 ; i += 2) {
                std::cout << i << " ";
                
            }

            int x;
            do {
                std::cout << "what do you think is the secret number: ";
                std::cin >> x;
                if (x == secret_num) {break;}
                
                bool wants_h;
                char y;
                std::cout << "wrong" << std::endl;
                std::cout << "enter h/H if a hint is needed otherwise enter anything: ";
                std::cin >> y;
                wants_h = ( (y == 'h' || y == 'H') ? true : false); 

                if (wants_h) {
                    std::cout << hints;
                }
            } while (x != secret_num);

            std::cout << "correct";
            break; }

        case 'm':
        case 'M': {
            int secret_num = 45; 
            str hints = "The number is less than 65 and its an odd number "; 

            std::cout << "on of the these values is the secret number, can you spot it ?" << std::endl;
            for (int i = 0 ; i <= 100 ; i++) {
                std::cout << i << " ";
            }

            int x;
            do {
                std::cout << "\nwhat do you think is the secret number: ";
                std::cin >> x;
                if (x == secret_num) {break;}
                
                bool wants_h;
                char y;
                std::cout << "wrong" << std::endl;
                std::cout << "enter h/H if a hint is needed otherwise enter any character: ";
                std::cin >> y;
                wants_h = ( (y == 'h' || y == 'H') ? true : false); 

                if (wants_h) {
                    std::cout << hints;
                }
            } while (x != secret_num);

            std::cout << "correct";
            break; }

        case 'h':
        case 'H': {
            int secret_num = -67; 
            str hints = "no hints for you but the answer is negative"; 

            int x;
            do {
                std::cout << "\nwhat do you think is the secret number: ";
                std::cin >> x;
                if (x == secret_num) {break;}
                
                bool wants_h;
                char y;
                if (x > secret_num) {
                    std::cout << "too high, try a smaller number and ";
                }
                else {
                    std::cout << "too small, try a bigger number and ";
                }
                std::cout << " enter h/H if a hint is needed otherwise press and buttom: ";
                std::cin >> y;
                wants_h = ( (y == 'h' || y == 'H') ? true : false); 

                if (wants_h) {
                    std::cout << hints;
                }
            } while (x != secret_num);

            std::cout << "correct";
            break; }
        
        default:
            std::cout << "invalid mode";
            
    }

    return 0;
}