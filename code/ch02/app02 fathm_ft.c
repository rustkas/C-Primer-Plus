// программа преобразует две морские сажени в футы
#include <stdio.h>

int main(void) 
{
  int feet, fathoms;

  fathoms = 2;                     /* задать значение в саженях */
  feet  = 6* fathoms;
  printf("%d морские сажени равны %d футам.\n", fathoms, feet);
  printf("Да! Имеено %d футов!\n", 6*fathoms);

  return 0;
}