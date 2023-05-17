#include <iostream>
#include "DynamicArray.h"


using namespace std;

int main()
{
    DynamicArray<int> pa;
    std::cout << pa.getSize() << std::endl;
    int array[] = {1,2,3,4};
    DynamicArray<int> pa1(array,4);
    DynamicArray<int> pa2 = pa1;
    std::cout << pa2.getSize() << std::endl;

    // push back
    DynamicArray<int> pa3;
    pa3.push_back(5); // 1 2 3 4 5
    std::cout << pa3.getSize() << std::endl; // 5

    
}