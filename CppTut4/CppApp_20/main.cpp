#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

std::vector<int> Range(int start, int max, int step);

int main() {
    
    int nTreeHeight = 0, nSpaces = 0, nHashes = 0, nStumpSpaces = 0;
    std::cout << "How tall is the tree : ";
    std::cin >> nTreeHeight ; 
    nSpaces = nTreeHeight -1;
    nStumpSpaces = nTreeHeight -1;
 
    while(nTreeHeight !=0){
        for(auto x:Range(1,nSpaces,1)){
            std::cout << " ";
        }
        for(auto x:Range(1,nHashes+1,1)){
            std::cout << "#";
        }
        std::cout <<  "\n";
        nTreeHeight -=1;
        nSpaces -=1;
        nHashes +=2;
    }
    
    for(auto x:Range(1,nStumpSpaces,1)){
       std::cout << " ";
    }   
    std::cout << "#"; 
    
    
/*    while(nTreeHeight >=1){
        for(int i=0; i<=nSpaces; ++i){
            std::cout << " ";
        }
        for(int i=0; i<=nHashes; ++i){
            std::cout << "#";
        }
        std::cout <<  "\n";
        nTreeHeight -=1;
        nSpaces -=1;
        nHashes +=2;
    }
    
    for(int i=0; i<=nStumpSpaces; ++i){
       std::cout << " ";
    }   
    std::cout << "#";
 */   
    
 /*   while(i<=nTree){
        int j=1;
        while(j<=(nTree-i)){
            std::cout << " ";
            j+=1;
        }
        for(int k=1; k<=2*i-1;++k){
            std::cout << "#";
        }
        std::cout << "\n";
        i +=1;
        if(i>nTree){
            for(int k=1; k<nTree; ++k){
                std::cout << " ";
            }
            std::cout << "#\n";
        }
    }
*/   
    return 0;
}

std::vector<int> Range(int start, int max, int step){
    
    int i = start; //Every while statement needs an index to start with
    
    std::vector<int> range;
    while(i<=max){
        range.push_back(i);
        i +=step;   
    }
    
    return range;
}