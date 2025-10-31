#include <stdio.h>

void jolly(void);  // объявление функции, выводящей "Он веселый молодец!"
void deny(void);   // объявление функции, выводящей "Никто не может это отрицать!"

int main(void) {
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

void jolly(void) {
    printf("Он веселый молодец!\n");
}

void deny(void) {
    printf("Никто не может это отрицать!\n");
}
