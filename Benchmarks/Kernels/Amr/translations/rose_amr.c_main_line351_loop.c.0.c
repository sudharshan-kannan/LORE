#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  double out[127];
  long i;
  long n;
  long j;
  FILE stderr[138];
  FILE stdout[343];
  FILE stdin[347];
  int __j_0__ = j;
  int __i_1__ = i;
  
#pragma scop
  for (__j_0__ = 2; __j_0__ <= 59; __j_0__ += 1) {
    for (__i_1__ = 2; __i_1__ <= 1; __i_1__ += 1) {
      out[__i_1__ + __j_0__ * n] = ((double )0.0);
    }
  }
  
#pragma endscop
  j = __j_0__;
  i = __i_1__;
  return 0;
}
