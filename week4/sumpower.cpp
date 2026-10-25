#include <iostream>
#include <cmath>

int main() {
    double sum,x;
    int n;
    std::cout << "input x,n (n should be an integer): ";
    std::cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + std::pow(x,i);
    }
    std::cout << sum;
}