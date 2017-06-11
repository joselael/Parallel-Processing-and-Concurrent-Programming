#include <stdio.h>

int main() {
  float evens[] = {2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0};
  float odds[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0};
  float result[8];

  for (int i = 0; i < 8; i++)
    result[i] = evens[i] - odds[i];

  printf("%f %f %f %f %f %f %f %f\n",
         result[0], result[1], result[2], result[3], result[4], result[5], result[6], result[7]);

  return 0;
}
