#include <stdio.h>

void smile(void);  // объявление функции, которая выводит "Улыбайся!"

int main(void) {
    smile(); smile(); smile();
    printf("\n");
    smile(); smile();
    printf("\n");
    smile();
    printf("\n");
    return 0;
}

void smile(void) {
    printf("Улыбайся!");
}
