#include <stdio.h>

int main(void) {

    int user_number = 0;
    scanf("%d", &user_number);
    int placeholder = user_number;

    int result = 1;
    int *pointer = &user_number;
    
    while(user_number > 0) {
        result *= user_number;
        *pointer -= 1;
    }

    printf("%d factorial is %d", placeholder, result);
}