#include <stdio.h>

void br(void);  // объявление функции, выводящей "Бразилия, Россия"
void ic(void);  // объявление функции, выводящей "Индия, Китай"

int main(void) {
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");
    return 0;
}

void br(void) {
    printf("Бразилия, Россия");
}

void ic(void) {
    printf("Индия, Китай");
}
