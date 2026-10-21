#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int A = 1;
    while(A <= n) {
        A++;
        int B = 1;
        while(B <= n) {
            B++;
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
