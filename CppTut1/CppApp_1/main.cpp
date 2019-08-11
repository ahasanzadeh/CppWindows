#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//using namespace std;
//using std::cout;

/*
 * 
 */
int main(int argc, char** argv) {
    
    std::cout << "Hello World\n";
    std::cout << "Hello World" << std::endl;
    
    if (argc != 1){
        std::cout << "You entered " << argc << " arguments\n";
    }
    
    for (int i = 0; i < argc; ++i){
        std::cout << argv[i] << "\n";
    }
    
    return 0;
}

