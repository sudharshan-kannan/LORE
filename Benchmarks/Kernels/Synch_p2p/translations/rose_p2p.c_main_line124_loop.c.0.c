#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  double vector[127];
  int m;
  int i;
  int n;
  int j;
  FILE stderr[138];
  FILE stdout[343];
  FILE stdin[347];
  int __j_0__ = j;
  int __i_1__ = i;
  
#pragma scop
  for (__j_0__ = 1; __j_0__ <= 83; __j_0__ += 1) {
    for (__i_1__ = 1; __i_1__ <= 19; __i_1__ += 1) {
      vector[__i_1__ + __j_0__ * m] = vector[__i_1__ - 1 + __j_0__ * m] + vector[__i_1__ + (__j_0__ - 1) * m] - vector[__i_1__ - 1 + (__j_0__ - 1) * m];
    }
  }
  
#pragma endscop
  j = __j_0__;
  i = __i_1__;
  return 0;
}
