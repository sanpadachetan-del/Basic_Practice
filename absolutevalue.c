#include <stdio.h>
int main()
{
  int n;
  printf(" the number is");
  scanf("%d", &n);
  if (n % 5 == 0 && n % 3 == 0)
  {
    printf("yes the number is divisible by 3 or 5");
  }
  else
    printf("the number is not divisible");

  /* code */

  return 0;
}