#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  double A[500];
  double k_data[500][500];
  int l;
  int index;
  double ev[500];
  int check[500];
  int n;
  int j;
  double min;
  int k;
  int i;
  FILE stderr[500];
  FILE stdout[500];
  FILE stdin[500];
  int __i_0__ = i;
  int __j_1__ = j;
  int __l_2__ = l;
  
#pragma scop
  for (__i_0__ = 0; __i_0__ <= 500; __i_0__ += 1) {{
      min = 1.7976931348623157e+308;
    }
    for (__j_1__ = 0; __j_1__ <= 500; __j_1__ += 1) {
      if (check[__j_1__]) {
        continue; 
      }
       else {
        if (ev[__j_1__] < min) {
          min = ev[__j_1__];
          index = __j_1__;
        }
         else {
        }
      }
    }{
      check[index] = 1;
    }
    for (__l_2__ = 0; __l_2__ <= 500; __l_2__ += 1) {
      k_data[__l_2__][__i_0__] = A[__l_2__ * n + index];
    }
  }
  
#pragma endscop
  i = __i_0__;
  j = __j_1__;
  l = __l_2__;
  return 0;
}
