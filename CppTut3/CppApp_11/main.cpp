#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

//Vectors

int main() {
    
    std::vector<int> myVec(10);
    std::iota(std::begin(myVec), std::end(myVec),1);// starting vector from 1
    
    for(auto y:myVec){
        if(y%2==0){
            std::cout << y << "\n";
        }   
    }
    
    return 0;
}

