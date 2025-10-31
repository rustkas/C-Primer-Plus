#include <stdio.h>

int main(void) {
    int years;     // возраст в годах
    int days;      // возраст в днях

    years = 25;          // <-- здесь можно указать свой возраст
    days = years * 365;  // не учитываем високосные годы

    printf("Ваш возраст: %d лет\n", years);
    printf("Это примерно %d дней\n", days);

    return 0;
}
