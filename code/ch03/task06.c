/* water.c -- вычисление количества молекул воды в заданном объеме */
#include <stdio.h>

int main(void)
{
    float quarts;
    double grams;
    double molecules;

    const double grams_per_quart = 950.0;
    const double grams_per_molecule = 3.0e-23;

    printf("Введите объем воды в квартах: ");
    scanf("%f", &quarts);

    grams = quarts * grams_per_quart;
    molecules = grams / grams_per_molecule;

    printf("В %.2f квартах содержится примерно %.3e молекул воды.\n", quarts, molecules);

    return 0;
}
