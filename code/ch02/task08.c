#include <stdio.h>

void one_three(void);  // объявление функции one_three()
void two(void);        // объявление функции two()

int main(void) {
    printf("начинаем:\n");
    one_three();
    printf("порядок!\n");
    return 0;
}

void one_three(void) {
    printf("один\n");
    two();
    printf("три\n");
}

void two(void) {
    printf("два\n");
}
