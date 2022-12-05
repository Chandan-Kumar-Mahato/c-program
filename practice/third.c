
//Armstrong or not
#include <stdio.h>
#include<math.h>

int main()
{
  int n,temp=n,count=0,A=0,r;
  scanf("%d",&n);
  while(temp!=0)
  {
    count++;
     temp=temp/10;
}
  temp=n;
  while(temp!=0)
  {
    r=temp%10;
    A=A+ pow(r,count);
    temp=temp/10;
  }
  if(A==n)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }

    return 0;
}