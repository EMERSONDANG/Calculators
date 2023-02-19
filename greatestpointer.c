#include <stdio.h>

int main(void) {
    int array[3] = {0};
    int user_number = 0;
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &user_number);
        array[i] = user_number;
    }

    int *p = array;
    int *q = array+1;
    int *r = array+2;

    if (*p > *q && *p > *r) {
        printf("The largest value among those three is %d \n", array[0]);
    }

    if (*q > *p && *q > *r) {
        printf("The largest value among those three is %d \n", array[1]);
    }

    if (*r > *p && *r > *q) {
        printf("The largest value among those three is %d \n", array[2]);
    }
}
