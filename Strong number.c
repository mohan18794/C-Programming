#include <stdio.h>

int main()
{
    int n=145;
    int r=1,sum=0,i,x;
    int temp=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
    
    for(i=x;i>1;i--)
    {
        r=r*i;
    }
    sum=sum+r;
    r=1;
    }
    if(sum==temp)
    {
        printf("The no is strong number");
    }
    else
    {
        printf("The no is not strong number");
    }
    return 0;
}

