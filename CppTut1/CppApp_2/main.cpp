#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int g_iRandNum =0;

const double PI = 3.14159;

int main() {
    
    bool bMarried = true;
    char chMyGrade = 'A';
    unsigned short int u16Age = 43;
    short int SiWeight = 180;
    int nDays = 7;
    long lBigNum = 1100000;
    float fPi = 3.14159;
    double dbBigFloat = 1.111111111111111111111;
    long double ldPi = 3.14159;
    auto whatWillIBe = true;
    
    std::cout << "Min bool " << std::numeric_limits<bool>::min() << "\n";
    std::cout << "Max bool " << std::numeric_limits<bool>::max() << "\n"; 
    
    std::cout << "Min char " << std::numeric_limits<char>::min() << "\n";
    std::cout << "Max char " << std::numeric_limits<char>::max() << "\n";
    
    std::cout << "Min unsigned short int " 
                << std::numeric_limits<unsigned short int>::min() << "\n";
    std::cout << "Max unsigned short int " 
                << std::numeric_limits<unsigned short int>::max() << "\n";
    
    std::cout << "Min short int " 
                << std::numeric_limits<short int>::min() << "\n";
    std::cout << "Max short int "
                << std::numeric_limits<short int>::max() << "\n";
    
    std::cout << "Min int " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Max int " << std::numeric_limits<int>::max() << "\n";
    
    //for long shows long min and max
    std::cout << "Min long " << std::numeric_limits<long int>::min() << "\n";
    std::cout << "Max long " << std::numeric_limits<long int>::max() << "\n";
    
    std::cout << "Min float " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Max float " << std::numeric_limits<float>::max() << "\n";
    
    std::cout << "Min double " << std::numeric_limits<double>::min() << "\n";
    std::cout << "Max double " << std::numeric_limits<double>::max() << "\n";
    
    std::cout << "Max long double " 
                << std::numeric_limits<long double>::min() << "\n";
    std::cout << "Max long double " 
                << std::numeric_limits<long double>::max() << "\n";
    
    //number of byte
    std::cout << "int size " << sizeof(int) << "\n"; 
     
    return 0;
}

