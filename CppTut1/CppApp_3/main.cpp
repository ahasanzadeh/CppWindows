#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum =0;

const double PI = 3.14159;

int main() {
    
    float fBigFloat = 1.1111111111;
    float fBigFloat2 = 1.1111111111;
    float fFloatSum = fBigFloat + fBigFloat2 ;
    
    printf("fFloatSum Precision : %.10f\n", fFloatSum);
    
    double dbBigFloat = 1.11111111111111111111;
    double dbBigFloat2 = 1.11111111111111111111;
    double dbFloatSum = dbBigFloat + dbBigFloat2;
    
    printf("dbFloatSum Precision : %.20f\n", dbFloatSum);
    
    printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");
     
    //number of byte
    std::cout << "int size " << sizeof(int) << "\n"; 
     
    return 0;
}

