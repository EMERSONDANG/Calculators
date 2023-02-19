#include <stdio.h>

int power(int a, int b, int count, int result) {
    if (b == count) {
        return result;
    }

    if (b == 0) {
        return 1;
    }

    if (a == 0) {
        return 0;
    }

    if (a == 1) {
        return 1;
    }

    result *= a;
    count += 1;
    power(a, b, count, result);
}

int main(void) {
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int result = a;
    int count = 1;
    int final = power(a, b, count, result);
    printf("%d", final);
}