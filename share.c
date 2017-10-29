#include <omp.h>

int main(int argc, char **argv)
{
  int a[100000];
  #pragma omp parallel for
  for (int i = 0; i < 100000; i++)
    {
      a[i] = 2 * i;
    }

  return 0;
}
