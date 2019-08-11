#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {
    
    std::string sAge = "0";
    int nGrade =0;
    std::cout << "Enter your age : ";
    getline(std::cin,sAge);
    int nAge = stoi(sAge);
    
    if (nAge < 5 ){
        std::cout << "Too young for school\n";
    } else if (nAge == 5){
        std::cout << "Go to kindergarten\n";
    } else if ((nAge >=6) && (nAge <= 17)){
        nGrade = nAge - 5 ;
        std::cout << "Go to grade " << nGrade << "\n";
    } else if (nAge >17 ){
        std::cout << "Go to college\n";
    }

    return 0;
}

