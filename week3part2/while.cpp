// Number adder

#include <iostream>

int main() {
    double input;
    double sum = 0;
    char response = 'y';

    while (response == 'y') {
        input = 0;
        std::cout << "give a real number: ";
        std::cin >> input;
        sum = sum + input;
        std::cout << "total = " << sum << "\ncontinue? y/n: ";
        std::cin >> response;
    }
}