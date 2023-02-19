#include <stdio.h>

// This generates the multiplication table of 12 x 12
// Uses tail recursion

void print_table(int start, int factor, int result) {
    // To simulate an n x n mult. table, change the
    // value in this if statement here
    if (start == 13) {
        return;
    }

    result = start * factor;
    
    // To get more numbers, change the number in factor here
    if (factor == 12) {
        printf("%d\n", result);
        start += 1;
        factor = 0;
    } else {
        printf("%d \t", result);
    }

    // reset result each time to zero
    result = 0;

    print_table(start, factor+1, result);
}
 
int main(void) {
    int start = 1;
    int factor = 1;
    int result = 0;

    print_table(start, factor, result);
}