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
    
    srand(time(NULL));
    int nSecretNum = std::rand() % 11;
    int nGuess = 0;
    
    do{
        std::cout << "Guess the number: ";
        std::cin >> nGuess;
        if(nGuess > nSecretNum) std::cout << "Too big\n";
        if(nGuess < nSecretNum) std::cout << "Too small\n";
    }while(nSecretNum!=nGuess);
    
    std::cout << "You guessed it";    
    
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