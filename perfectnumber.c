#include <stdio.h>

// This program checks if a number is perfect or not using tail recursion
// Perfect number is if the factors of a number including 1 will sum to the number itself
// e.g. 1 + 2 + 3 = 6, 6 is a perfect number
// factors of 6 are 2 and 3 and 1

int perfect_number(int user_number, int factor, int result) {
    if (result > user_number) {
        return result;
    }

    if (result == user_number) {
        return result;
    }

    if (factor == user_number - 1) {
        return result;
    }

    if (user_number % factor == 0) {
        result += factor;
    }

    perfect_number(user_number, factor + 1, result);
}

int main(void) {
    int user_number = 0;
    scanf("%d", &user_number);

    // variables for tail recursion
    int result = 0;
    int factor = 1;

    int answer = perfect_number(user_number, factor, result);

    if (answer == user_number) {
        printf("%d is a perfect number", user_number);
    } else {
        printf("%d is not a perfect number", user_number);
    }
}