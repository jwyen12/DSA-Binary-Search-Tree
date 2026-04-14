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

    //traversal testing
    std::cout << "Traversal Testing: \n";
    test.insert(8);
    test.insert(3);
    test.insert(55);
    test.insert(7);
    test.insert(17);
    test.insert(44);
    test.insert(80);
    test.insert(2);
    test.insert(61);
    
    test.in_order_traversal();
    test.post_order_traversal();
    test.pre_order_traversal();
    test.level_order_traversal();

    return 0;
}
