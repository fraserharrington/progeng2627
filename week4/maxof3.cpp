// Max of 3 numbers

#include <iostream>

double maxof3(double n1, double n2, double n3) {
    double temp;
    if (n1 > n2) {
        temp = n1;
    } else {
        temp = n2;
    }
    if (n3 > temp) {
        return n3;
    } else {
        return temp;
    }
}

int main() {
    std::cout << maxof3(2,2,9);
}