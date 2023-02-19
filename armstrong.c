#include <stdio.h>
#include <stdlib.h>

// Program checks if a number is Armstrong or not

int main(void) {

    // Ask user for a number
    int user_number = 0;
    scanf("%d", &user_number);

    // Two variables to keep value of user number
    int placeholder = user_number;
    int placeholder_two = user_number;

    // For loop to count how many digits in user number
    // Logic: Keep dividing number by ten until you get 0 point something
    // That way, thats when you know the number will be smaller than 1
    int count = 0;
    while(user_number >= 1) {
        count ++;
        user_number /= 10;
    }

    // Create an int array from heap to hold user number digits
    int* array = malloc(sizeof(int) * count);

    // For loop to store user number digits into array
    for (int i = 0; i < count; i++) {
        array[i] = placeholder % 10;
        placeholder /= 10;
    }

    // Cube every digit in array and put in result
    int result = 0;
    for (int i = 0; i < count; i++) {
        int z = array[i] * array[i] * array[i];
        result += z;
    }

    // Checks if the sum of cube of each digit is equal to user number or not
    if (result == placeholder_two) {
        printf("Number is Armstrong");
    } else {
        printf("Number is not Armstrong");
    }

    free(array);
}