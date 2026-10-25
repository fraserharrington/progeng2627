#include <iostream>

int smallest_factor(int n) {
    for(int cf = 2; cf < n; cf++){
        if ( (n % cf) == 0) {
            return cf;
        }
    }
    return 0;
}

bool is_prime(int n){
    if(smallest_factor(n) == 0){
        return true;
    }
    return false;
}

int main() {
    int n1,n2;
    std::cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++) {
        if (smallest_factor(i) == 0) {
            std::cout << i << std::endl;
        }
    }
}