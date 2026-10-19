#include <iostream>

int main() {
    // Computes x to the n
    int x = 3;
    int n = 5;
    int y = 1;
    for(int i = 1; i <= n; i++) {
        y = y * x;
    }
    std::cout << y << std::endl;
}