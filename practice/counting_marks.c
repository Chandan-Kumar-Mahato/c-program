#include<stdio.h>
int main()
{
    int n,N,count=0;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        
        scanf("%d",&N);
        if(N>=50)
    {
        count++;
    }
    }
    
    
    printf("%d",count);




    return 0;
}