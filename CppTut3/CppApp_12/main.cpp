#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

double AddNumbers(double num1, double num2);

int main() {
    
    std::string snum1;
    double num1, num2;
    std::cout << "Enter Num 1 : ";
    getline(std::cin,snum1);
    num1 = stod(snum1);
    std::cout << "Enter Num 2 : ";
    std::cin >> num2;
    
    printf("%.1f + %.1f = %.1f", num1, num2, AddNumbers(num1,num2));
    
    return 0;
}

double AddNumbers(double num1, double num2){
    return num1 + num2;
}
