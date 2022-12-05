// #include <stdio.h>
// /* Include other headers as needed */
// int main()
// {
//   int n,r,s=0;
//   scanf("%d",&n);
//   while(n>0)
//   {
//     r=n%10;
//     r=r+1;
//     s=(s*10)+r;
//     n=n/10;
//   }
//   n=s;
//   s=0;
//   while(n>0)
//   {
//     r=n%10;
//     s=(s*10)+r;
//     n=n/10;
//   }
//   printf("%d",s);

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     return 0;
// }
#include <stdio.h>
 
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    b++;
    c++;
    d++;
    a++;
    b=b%10;
    c=c%10;
    d=d%10;
    a=a%10;
    printf("%d",a*1000+d*100+c*10+b);

    return 0;
}


