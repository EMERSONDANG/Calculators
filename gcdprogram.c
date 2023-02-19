#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <float.h>

// Create a program which takes two integers
// and prints out the gcd of the two numbers
// Use a helper function and tail recursion
// Tail recursion recalls the function but stores
// the value in the parameter. Make sure to have base cases
// so that the final value in the parameter is returned

int gcd(int a, int b, int result) {
    if (result == a || result == b) {
        if ((a % result == 0) && (b % result == 0)) {
            return result;
        }
    }

    if (result > a || result > b) {
        return 1;
    }

    gcd(a, b, result+1);
}

int main(void) {
    int a = 0;
    int b = 0;
    int result = 1;
    scanf("%d", &a);
    scanf("%d", &b);
    int hcf = gcd(a, b, result);
    printf("The gcd of %d and %d is %d.", a, b, hcf);
}