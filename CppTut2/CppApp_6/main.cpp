#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {
    
    std::string sAge = "0";
    std::cout << "Enter your Age : ";
    getline(std::cin,sAge);
    
    int nAge = stoi(sAge);
    
    if ((nAge >= 1) && (nAge <= 18)){
        std::cout << "Important Birthday\n";
    } else if ((nAge == 21 ) || (nAge == 50)){
        std::cout << "Important Birthday\n";
    } else if (nAge >= 65){
        std::cout << "Important Birthday\n";
    } else {
        std::cout << "Not an Important Birthday\n";
    }

    return 0;
}

