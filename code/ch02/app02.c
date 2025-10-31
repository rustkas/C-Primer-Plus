#include <stdio.h>

int main(void) /* преобразуем две морские сажени в футы */
{
  int feet, fathoms;

  fathoms = 2;                     /* задать значение в саженях */
  feet  = 6* fathoms;
  printf("%d морские сажени равны %d футам.\n", fathoms, feet);
  return 0;
}