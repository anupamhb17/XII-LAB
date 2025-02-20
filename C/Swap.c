#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before Swap: \tx = %d, y = %d\n\n", x, y);
    swap(&x, &y);
    printf("After Swap: \tx = %d, y = %d\n", x, y);
    return 0;
}
