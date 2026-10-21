#include <iostream>
#include <cmath>

int main() {
    double guess = 50;
    int max = 100;
    int min = 0;
    char input;
    bool still_guessing = true;

    std::cout << "Think of a number between 1 and 100 inclusive.\n";

    while (still_guessing) {
        std::cout << "Is your number bigger than, lesser than or equal to " << guess << "?\nEnter b for bigger, l for lesser or e for equal to: ";
        std::cin >> input;

        if (input == 'b') {
            min = guess;
        } else if (input == 'l') {
            max = guess;
        } else if (input == 'e') {
            still_guessing = false;
        }
        guess = round(min + 0.5*(max-min));
    }
}