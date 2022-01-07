#include<stdio.h>

int f(int n, int dp[])
{
  if (n == 0 || n == 1) return n;
//  if (dp[n] != -1) return dp[n];

  return (f(n-1, dp) + f(n-2, dp));
}

int main()
{
  int n, i = 0, c, dp[100] = {-1};
 
  scanf("%d", &n);
 
  printf("Fibonacci series terms are:\n");
 
  for (c = 1; c <= n; c++)
  {
    printf("%d\n", f(i, dp));
    i++;
  }
 
  return 0;
}
 
