#include <stdio.h>


// Using tail recursion. Have a = the first term of fib sequence
// b = second term of fib sequence, result = third
// shift a to what b is, and shift b to what result is,
// and shift what result is to the next term
// One error: Entering the second term gives 0
int fib(int a, int b, int result, int user_number) {
    if (user_number == 0) {
        return 0;
    }

    if (user_number == 1) {
        return 1;
    }

    if(user_number == 2) {
        return result;
    }

    result = a + b;
    a = b;
    b = result;
    user_number -= 1;

    fib(a, b, result, user_number);
}

int main(void) {
    int a = 1;
    int b = 1;
    int user_number = 0;
    int result = 0;
    scanf("%d", &user_number);
    int final = fib(a, b, result, user_number);
    printf("%d", final);
}