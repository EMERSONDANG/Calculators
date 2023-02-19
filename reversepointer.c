#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int user_number = 0;
    scanf("%d", &user_number);
    int placeholder = user_number;

    int count = 0;
    while(user_number > 0) {
        count += 1;
        user_number /= 10;
    }

    int* array = malloc(sizeof(int) * count);

    int digit = 0;
    for (int i = 0; i < count; i++) {
        digit = placeholder % 10;
        array[i] = digit;
        placeholder /= 10;
        digit = 0;
    }

    int *pointer = array;

    for (int i = 0; i < count; i++) {
        printf("%d", *pointer);
        pointer += 1;
    }
}