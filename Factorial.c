#include <stdio.h>

int main()
{
    int i,n,r=1;
    
    printf("Enter n value\n");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        r=r*i;
    }
    printf("%d",r);

    return 0;
}
