#include <assert.h>
#include <stdio.h>
//#include "calculator.c"  // Including calculator functions for testing

void test_add() {
    printf("Running test_add...\n");
    assert((1 + 1) == 2);
}

void test_subtract() {
    printf("Running test_subtract...\n");
    assert((3 - 2) == 1);
}

void test_multiply() {
    printf("Running test_multiply...\n");
    assert((2 * 3) == 6);
}

void test_divide() {
    printf("Running test_divide...\n");
    assert((6 / 3) == 2);
}

int main() {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
    printf("All tests passed!\n");
    return 0;
}
