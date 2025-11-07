#include <stdio.h>

int main(void) {
  float speed_mbps; // скорость загрузки в мегабитах в секунду
  float size_mb;    // размер файла в мегабайтах
  float time_sec;   // время загрузки в секундах

  printf("Введите скорость загрузки (в мегабитах в секунду): ");
  scanf("%f", &speed_mbps);

  printf("Введите размер файла (в мегабайтах): ");
  scanf("%f", &size_mb);

  time_sec = (size_mb * 8) / speed_mbps; // перевод мегабайт в мегабиты

  printf("При скорости загрузки %.2f мегабит в секунду файл размером %.2f "
         "мегабайт\n",
         speed_mbps, size_mb);
  printf("загружается за %.2f секунд(ы).\n", time_sec);

  return 0;
}
