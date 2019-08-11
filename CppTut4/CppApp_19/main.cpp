#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

int main() {
    
    int i = 1;
    
    while(i <=20){
        if(i%2==0){
            i+=1;
            continue; //Skips the rest of the loop, and gets back to while
        }
        if(i==15) break;
        
        std::cout << i << "\n";
        
        i+=1;
    }
    
    return 0;
}
