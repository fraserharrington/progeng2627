// first version, not the most efficient one
#include <iostream>
#include <cmath>

int main(){
    int n;
    float floatn;
    bool found_factor = false;
    bool stay = true;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;


    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; stay; cf++){

        if( ((n % cf) == 0) && (n != 2)){ // n can be divided by cf...

            found_factor = true;
            stay = false;
            //...it means we have found a factor!
        }

        floatn = n;

        if (cf > (sqrt(floatn))) {
            stay = false;
        }

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}