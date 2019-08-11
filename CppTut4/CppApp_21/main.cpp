#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

std::vector<int> Range(int start, int max, int step);

int main() {
    
    double nNum1 = 0, nNum2 = 0;
    
    std::cout << "Enter number 1: ";
    std::cin >> nNum1;
    std::cout << "Enter number 2: ";
    std::cin >> nNum2;
    
    try{
        if(nNum2 ==0){
            throw "Division by zero is not possible";
        }else{
            printf("%.1f / %.1f = %.2f", nNum1, nNum2, (nNum1/nNum2)) ;
        }
    }
    
    catch(const char* exp){
        std::cout << "Error : " << exp << "\n";
    }

    return 0;
}

std::vector<int> Range(int start, int max, int step){
    
    int i = start; //Every while statement needs an index to start with
    
    std::vector<int> range;
    while(i<=max){
        range.push_back(i);
        i +=step;   
    }
    
    return range;
}