#include <iostream>
#include <string>

double question(std::string theQuestion) {
    double answer;
    std::cout << theQuestion << std::endl;
    std::cin >> answer;
    return answer;
}


int main() {
    double a1 = question("Side length 1/pounds/temperature in C/weight in kilos");
    double a2 = question("Side length 2/euro exchange rate/height in metres");
    std::cout << "Perimeter = " << 2 * (a1 + a2) << std::endl;
    std::cout << "Area/euros = " << a1 * a2 << std::endl;
    std::cout << "Temp in F = " << (a1 * 1.8) + 32 << std::endl;
    std::cout << "BMI = " << a2 / (a1 * a1) << std::endl;
}
    


