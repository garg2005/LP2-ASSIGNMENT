#include <iostream>
#include <limits>

bool isValid(int num) {
    return num % 8 == 0;
}

int main() {
    int count = 0;
    int num;
    char choice;

    do {
        std::cout << "Enter a number (or type 'exit' to stop): ";
        if (!(std::cin >> num)) 
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::string input;
            std::cin >> input;
            if (input == "exit") {
                break;
            }
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            continue;
        }
        if (isValid(num)) {
            count++;
        } else {
            std::cout << "Invalid number. Please enter a number divisible by 8." << std::endl;
        }
        std::cout << "Do you want to continue? (yes/no): ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // consume newline character
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Total valid numbers entered: " << count << std::endl;

    return 0;
}
