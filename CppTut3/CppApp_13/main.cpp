#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

void AssignAge(int age);
int AssignAge2(int age);

int main() {
    
    int age = 43 ;
    
    AssignAge(age);//Does not return anything
    std::cout << "New Age : " << age << "\n";
    
    age = AssignAge2(age);
    std::cout << "Returned Age : " << age << "\n";
    
    return 0;
}

void AssignAge(int age){
    age = 24;
}

int AssignAge2(int age){
    age = 24;
    return age;
}
