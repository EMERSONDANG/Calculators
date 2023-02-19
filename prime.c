#include <stdio.h>

int main(void) {

    // Logic: A prime number only has divisors of 1 and itself
    // So the max divisors a prime number has is 2
    // If a number has more than 2 divisors, its automatically not a prime
    int count = 2;
    int user_number = 0;
    scanf("%d", &user_number);

    // Start at i=2 since 1 already divides the number
    for(int i = 2; i < user_number; i++) {
        if (user_number % i == 0) {
            count += 1;
            break;
        }
    }

    if (count > 2) {
        printf("%d is not prime", user_number);
    } else {
        printf("%d is prime", user_number);
    }
}