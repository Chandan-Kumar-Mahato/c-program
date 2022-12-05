// sum of all digit of n numbers

#include <stdio.h>
int main()
{
    int N,n, r, s = 0,temp;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--)
    {
        scanf("%d", &n);
        temp=n;
        s=0;
        while (temp != 0)
    {

        r = temp % 10;
        s = s + r;
        temp = temp / 10;
    }
    printf("%d\n",s);

    }
    
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int N,n,temp,s=0,r;
//     scanf("%d",&N);
//     for(int i=N;i>=1;i--)
//     {
//         scanf("%d",&n);
//         temp=n;
//         s=0;
//     while(temp!=0)
//     {
//         r=temp%10;
//         s=s+r;
//         temp=temp/10;
//     }
//  printf("%d\n",s);
//     }
   



//     return 0;
// }