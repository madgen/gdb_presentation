// program to make change in pennies, nickels, dimes
// 10/7/07 Cliff Stein


#include <stdio.h>
#include <stdlib.h>
#define INFTY 100000

int min2(int x, int y) {
  
  if (x <= y)  return x;
  return y;
}

int min3(int x, int y, int z) {
  if ( (x <= y) && (x <= z) )
    return x;
  if ( (y < x) && (y < z))
    return y;
  else
    return z;
}
  
int dpchange(int n) {
  int C[1000];
  int i,j;
  
  C[0] = 0;
  for (i=1; i<= n; i++) {
    
    if (i < 5)
      C[i] = 1+ C[i-1];
    else if (i < 10)
      C[i] = 1 + min2(C[i-1],C[i-5]);
    else 
      C[i] = 2 + min3(C[i-1],C[i-5],C[i-10]);
  }
  return C[n];
}


int main(int argc, char *argv[]) {
  int n;

  n = atoi(argv[1]);
  
  int result = dpchange(n);
  printf("\n\n Number of coins needed is  %d\n", result);
}
