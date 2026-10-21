// Tetrates all numbers up from 1 to the integer input inclusive by 2
// aka raising it to the power of itself. I wanted to do self tetration but I forgot about the limits of floating point numbers

#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "give an integer, output will be tetration of all numbers up from 1 to the integer input inclusive by 2: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cout << pow(i,i) << "\n";
    }
}