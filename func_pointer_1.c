#include <stdio.h>

void func(int a) {
    printf("Function Call. Param Value: %d\n", a);
}

int main() {

    void (*func_ptr)(int) = &func;
    /*
        Equivalent to:

        void (*func_ptr)(int);
        func_ptr = &func

        This works too:

        void (*func_ptr)(int) = func;
    */

    // Calling func
    (*func_ptr)(10);

    /*
        func_ptr(20);
    */

    return 0;
}