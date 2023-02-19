#include <stdio.h>

int main(void) {
    
    int array[10] = {0};
    
    int user_number = 0;
    int count = 0;
    
    while(count < 10) {
        scanf("%d", &user_number);
        array[count] = user_number;
        user_number = 0;
        count ++;
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\n", array[i]);
    }

    // Algorithm to sort array (Selection sort)
    for (int i = 0; i < 10; i++) {
        int index = array[i];
        for (int j = i+1; j < 10; j++) {
            if (array[i] > array[j]) {
                array[i] = array[j];
                array[j] = index;
                break;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\n", array[i]);
    }
}