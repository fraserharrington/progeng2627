#include <iostream>

int main() {
    int final;
    std::cin >> final;
    for(int num = 1; num <= final; num++) {
        for(int mul = 1; mul <= final; mul++) {
            std::cout << num * mul << "\t";
        }
        std::cout << "\n";
    }
}