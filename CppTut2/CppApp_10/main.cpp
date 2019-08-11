#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

//Vectors

int main() {
    
    std ::vector<std::string> vecsCalc;
    std::string sCalc = "";   
    std::cout << "Enter calculation (ex. 5 + 6 ) : ";
    getline(std::cin, sCalc);
    std::stringstream ss(sCalc);
    std::string sIndivStr;
    char cSpace = ' ';

    while(getline(ss, sIndivStr, cSpace)){
        vecsCalc.push_back(sIndivStr);        
    }

    double dbNum1 = stod(vecsCalc[0]);
    double dbNum2 = stod(vecsCalc[2]);
    std::string operation = vecsCalc[1];
    
    if(operation=="-"){
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 - dbNum2));
    }else if(operation=="+"){
        printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 + dbNum2));
    }else if(operation=="*"){
        printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 * dbNum2));
    }else if(operation=="/"){
        printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 / dbNum2));
    }else{
        std::cout << "Please enter only +, -, *, /\n";
    }

    
    return 0;
}

