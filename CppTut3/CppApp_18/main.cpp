#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

std::vector<int> Range(int start, int max, int step);

int main() {
    
    double investment = 0.0, interestRate = 0.0;
    std::cout << "How much to invest : ";
    std::cin >> investment ;
    std::cout << "Interest Rate : ";
    std::cin >> interestRate;
    
    interestRate *= 0.01;
    for(auto y: Range(1,10,1)){
        investment += (investment*interestRate);
    }
 
    std::cout << "Value after 10 years : " << investment << "\n";    
    
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