/* showf_pt.c -- отображает значение типа float двумя способами */
#include <stdio.h>

int main(void) {
  float toobig = 3.4E38 * 100.0f;
  printf("%e\n", toobig);

  return 0;
}
