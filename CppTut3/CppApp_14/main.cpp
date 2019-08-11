#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>



int main() {
    
    int age = 43;
    int* pAge = NULL;
    
    pAge = &age;
    
    std::cout << "Address for age is : " << pAge << "\n";
    
    std::cout << "Value at address is : " << *pAge << "\n";
    
    int intArray[] = {1,2,3,4};
    int* pIntArray = intArray; //for array, & sign does not need to put in front of variable 
    
    std::cout << "1st valus is " << *pIntArray << " , and its address is " <<
            pIntArray << "\n";
    
    pIntArray++;
    std::cout << "2nd value is " << *pIntArray << " , and its address is " <<
            pIntArray << "\n";
    
    pIntArray--;
    std::cout << "1st value is " << *pIntArray << " , and its address is " <<
            pIntArray << "\n";
    return 0;
}

