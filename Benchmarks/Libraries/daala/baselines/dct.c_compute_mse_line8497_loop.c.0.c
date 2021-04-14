#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
extern int i;
extern int n;
extern int j;
extern double ret;
extern double e[1 << 6][1 << 6];
extern double basis[1 << 2 + 5 - 1][1 << 2 + 5 - 1];
extern double tbasis[1 << 2 + 5 - 1][1 << 2 + 5 - 1];

void loop()
{
  int __i_0__ = i;
  int __j_1__ = j;
  
#pragma scop
{
    for (__i_0__ = 0; __i_0__ <= n - 1; __i_0__ += 1) {
      for (__j_1__ = 0; __j_1__ <= n - 1; __j_1__ += 1) {
        ret += e[__i_0__][__j_1__] * (basis[__i_0__][__j_1__] - tbasis[__i_0__][__j_1__]);
      }
    }
  }
  
#pragma endscop
  i = __i_0__;
  j = __j_1__;
}
