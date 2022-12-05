#include <stdio.h>
int main()
{
  int n,year,weeks,days;
  scanf("%d",n);
  year=n/365;
  n=n-365;
  weeks=n/7;
  n=n-7;
  days=n/30;
  printf("%d",year);
  printf(" ");
  printf("%d",weeks);
  printf(" ");
  printf("%d",days);
  

    return 0;
}