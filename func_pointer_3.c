#include <stdio.h>

void add(int a, int b) {
    printf("Sum: %d", a + b);
}

void subtract(int a, int b) {
    printf("Difference: %d", a - b);
}

void multiply(int a, int b) {
    printf("Product: %d", a * b);
}

int main() {
    
    void (*func_ptr_arr[])(int, int) = {add, subtract, multiply};

    unsigned int ch, a = 20, b = 5;

    printf("1 - Sum\n2 - Difference\n3 - Product\nEnter Choice: ");
    scanf("%d", &ch);

    if ((ch - 1) > 2)
        return 0;

    (*func_ptr_arr[ch - 1])(a, b);

    return 0;
}