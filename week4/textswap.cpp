#include <iostream>

void swap(std::string& s1, std::string& s2) {
    std::string t;
    t = s1;
    s1 = s2;
    s2 = t;
}

int main () {
    std::string i1,i2;
    std::cin >> i1 >> i2;
    swap(i1,i2);
    std::cout << i1 << std::endl << i2 << std::endl; 

}