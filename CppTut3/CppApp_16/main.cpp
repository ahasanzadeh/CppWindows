#include <cstdlib> //Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>

void DoubleArray(int* arr, int size);

int main() {
    
    int arr[] = {1,2,3,4};
    DoubleArray(arr,4);
    for(int i=0; i<4; ++i){
        std::cout << "array " << arr[i] << "\n";
    }

    return 0;
}

void DoubleArray(int* arr, int size){
    for(int i=0; i<size; ++i){
        arr[i] = arr[i]*2;
    }
}
