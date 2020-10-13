#include <stdio.h>

void func() {
    printf("Function Called from a Callback")
}

void callback_func(void (*func_ptr)(), int flag) {

    // Condition to call
    if (flag) 
        (*func_ptr) ();
}

int main() {

    void (*f_ptr)() = &func;
    callback_func(f_ptr, 1)

    return 0;
}