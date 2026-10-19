#include <iostream>

int main () {
    int n, max, min;

    std::cout << "enter number: \n";
    std::cin >> n;

    max = n;
    min = n;

    std::cout << "max, min:" << max << ", " << min << "\n";

    while(n != 0) {

        std::cout << "enter number: \n";
        std::cin >> n;

        if(n > max) {
            max = n;
        }
        if(n < min) {
            min = n;
        }

        std::cout << "max, min:" << max << ", " << min << "\n";
    }
}