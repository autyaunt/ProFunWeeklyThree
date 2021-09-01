#include<stdio.h>
int main()
{
  int j,n;
  int i=1;
  scanf("%d",&n);
  while (i<=n)
  {
    j=1;
      while (j<=n)
      {
          printf("*");
          ++j;
      }
      ++i;
      printf("\n");
  }
  return 0;
}
