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

double sop(double n1, int n2) {
    double sum;
    for (int i = 1; i <= n2; i++) {
        sum = sum + mypow(n1,i);
    }
    return sum;
}

int main() {
    double x;
    int n;
    std::cout << "input x,n (n should be an integer): ";
    std::cin >> x >> n;
    std::cout << sop(x,n);
}