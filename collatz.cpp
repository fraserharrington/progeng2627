#include <iostream>

int main() {
    int n;
    int count = 0;
    int max = 0;
    std::cin >> n;
    std::cout << "-----\n";

    while (n != 1) {
        if (n % 2 == 0) {
            n = n/2;
        } else {
            n = 3*n + 1;
        }
        
        if (n > max) {
            max = n;
        }
        count++;
        std::cout << n << "\t";
    }
    std::cout << "\n" << count << " steps." << "\nMax: " << max;

}