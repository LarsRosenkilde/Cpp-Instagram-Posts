#include "Fibonacci.h"

int Fibonacci::Standard(int n) {
    int a = 0; int b = 1; int c = a + b;
    for (int i = 0; i < n; i++) {
        a = b;
        b = c;
        c = a + b;
    }
    return a;
}

int Fibonacci::Recursive(int n) {
    if (n <= 1) {
        return n;
    }
    return Fibonacci::Recursive(n - 1) + Fibonacci::Recursive(n - 2);
}