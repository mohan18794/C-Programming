#include <stdio.h>

int main()
{
    int n=2576;
    int r;
    int x=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
        //printf("\n");

    } 
    
    
   
    return 0;
}
