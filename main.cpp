#include "include/BST.h"
#include <iostream>

int main(){
    BST test;
    test.insert(5);
    int x = test.count();
    std::cout << x << std::endl;
    test.insert(1);
    test.insert(3);
    test.insert(55);
    x = test.count();
    std::cout << x << std::endl;
    std::cout << test.remove(3) << std::endl;
    std::cout << test.remove(6) << std::endl;
    std::cout << test.height() << std::endl;
    std::cout << test.search(1) << std::endl;
    return 0;
}