#include <iostream> // is a library
#include <stdio.h>

int main() {

    std::cout << "Hello, World!" << std::endl;
    std::cout << "We did it" << std::endl;
    std::cout << "The goal for today is to do more lessons in CLion" << std::endl;
    std::cout << "Ready?" << std::endl;

    int x = 5;
    int* px = &x;

    printf("the value of x is %u\n", x);
    printf("x address: %p\n",x);
    printf("px stores: %p\n",px);

    return 0;


}
