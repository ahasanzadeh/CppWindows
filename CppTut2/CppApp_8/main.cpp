#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

//Arrays

int main() {
    
    int arrnNums1[10]={1};
    int arrnNums2[]={1,2,3};
    int arrnNums3[5]={8,9};
    
    std::cout << "1st value : " << arrnNums3[0] << "\n";
    
    arrnNums3[0] = 7;
    
    std::cout << "1st value : " << arrnNums3[0] << "\n";
    
    std::cout << "Array size : " <<
            sizeof(arrnNums3)/sizeof(*arrnNums3) << "\n";
    
    int arrnNums4[2][2][2] = { { {1,2}, {3,4} } , { {5,6} , {7,8} } };
    
    std::cout << arrnNums4[1][1][1] << "\n";
    return 0;
}

