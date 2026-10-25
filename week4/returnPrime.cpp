#include <iostream>

int smallest_factor(int n) {
    for(int cf = 2; cf < n; cf++){
        if ( (n % cf) == 0) {
            return cf;
        }
    }
    return 0;
}

int main() {
    int in;
    std::cin >> in;
    std::cout << smallest_factor(in);
}