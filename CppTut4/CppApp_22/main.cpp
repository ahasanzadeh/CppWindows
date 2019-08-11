#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

std::vector<int> Range(int start, int max, int step);

int main() {
    
    try{
        std:: cout << "Throwing exception\n";
        throw std::runtime_error("Error occurred");
        std::cout << "Can you print me?\n";
    }
    
    catch(std::exception &exp){
        std::cout << "Handled Exception: " << exp.what() << "\n";
    }
    
    catch(...){
        std::cout << "Default Exception\n";
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