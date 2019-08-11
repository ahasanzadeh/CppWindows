#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

void AssignAge3(int* pAge);

int main() {
    
    int age = 43;
    
    AssignAge3(&age);
    std::cout << "Pointer Age is " << age << "\n";

    return 0;
}

void AssignAge3(int* pAge){
    *pAge = 22;
}
