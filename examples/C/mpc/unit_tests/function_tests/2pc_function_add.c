#include "../util.c"

int add2(int a, int b) {
    return a + b;
}

int main(__attribute__((private(0))) int a, __attribute__((private(1))) int b) { 
   return add(a, b) + add2(a, b);
}