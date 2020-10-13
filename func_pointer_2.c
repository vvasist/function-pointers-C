#include <stdio.h>

void func_1() {
    printf("Function 1 Call\n");
}

void func_2() {
    printf("Function 2 Call\n");
}

void wrapper_func(void (&func)()) {
    func();
}

int main() {
    wrapper_func(func_1);
    wrapper_func(func_2);

    return 0;
}