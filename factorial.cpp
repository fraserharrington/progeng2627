#include <iostream>

int main() {
    int n;
    int f = 1;
    std::cout << "Input an intenger to get its factorial: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        f = f * i;
    }
    std::cout << f;
}