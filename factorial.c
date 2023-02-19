#include <stdio.h>
#include <stdbool.h>

// Use a helper function and tail recursion

int factorial(int a, int result) {
    if (a == 0) {
        return 0;
    } 

    if (a == 1) {
        return result;
    }

    result *= a;

    factorial(a-1, result);
}

int main(void) {
    int a = 0;
    int result = 1;
    scanf("%d", &a);
    int factor = factorial(a, result);
    printf("%d", factor);
}
