#include <iostream>

double mypow(double base, int exp){
    double result = 1; 

    for(int i = 1; i <= std::abs(exp); i++) {
        result = result * base;
    }

    if (exp < 0) {
        result = 1 / result;
    }
    
    return result;
}

int main() {
    double sum,x;
    int n;
    std::cout << "input x,n (n should be an integer): ";
    std::cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + mypow(x,i);
    }
    std::cout << sum;
}
