#include "DinamycintArray.h"
#include <iostream>

int main()
{
    DynamicIntegerArray pa;
    std::cout << pa.getSize() << std::endl;
    int array[] = {1,2,3,4};
    DynamicIntegerArray pa1(array,4);
    DynamicIntegerArray pa2 = pa1;
    std::cout << pa2.getSize() << std::endl;

    // push back
    DynamicIntegerArray pa3;
    pa3.pushback(pa1,5); // 1 2 3 4 5
    std::cout << pa3.getSize() << std::endl; // 5

    // insertar
    DynamicIntegerArray pa4;
    pa4.insert(pa3,2,7); // 1 7 2 3 4 5
    std::cout << pa4.getSize() << std::endl; // 6   

    // eliminar
    DynamicIntegerArray pa5;
    pa5.eliminar(pa4,1); // 7 2 3 4 5
    std::cout << pa5.getSize() << std::endl; // 5

    DynamicIntegerArray *ptr = &pa2;
    std::cout << ptr->getSize() << std::endl;
    return 0;
}