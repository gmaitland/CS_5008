#include <iostream> // is a library
#include <stdio.h>

void setValue(int* x){ // Very important. Everything in this function has its own memory address
    printf("the value of x: %i\n", x); // the pass by value of x is the integer value from the variable a which is 6
    *x = 9999; // we update the memory value of x from 6 to 9999 in this instance the variable is a
    // int x = &x;
    // x = *y;
    printf("the value of x: %i\n", x); //
    printf("x address: %p\n", (void*)&x);

}

int main() {

    std::cout << "Hello, World!" << std::endl;
    std::cout << "We did it" << std::endl;
    std::cout << "The goal for today is to do more lessons in CLion" << std::endl;
    std::cout << "Ready?" << std::endl;

    int x = 5;
    int* px = &x;

    printf("the value of x is %u\n", x); // x is the integer value
    printf("x's address: %p\n",&x); // &x is the address in memory of the integer value of x
    printf("px stores: %p\n",px); // px is the pointer that stores the address in memory of the integer value x
    printf("px's address: %p\n",&px); // &px is the address in memory of the pointer px
    printf("px points to the value %i\n",*px); // *px points to the integer value of x

    *px = 100; // this allows us to update the integer value of x

    printf("px's address: %p, %p, %i, %u\n", &px, px, *px, x); // everything is same except the integer of x, x = 100

    int a = 6;
    printf("a is: %d\n", a);
    setValue(&a);
    printf("a is: %d\n", a);

    printf("a address: %p\n", (void*)&a);

    return 0;
}
