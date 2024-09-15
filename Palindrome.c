#include <stdio.h>

int main()
{
    int n=123;
    int r=0;
    int temp=n;
    while(n>0)
    {
      r=r*10+n%10;  
      n=n/10;
      
    }
    //printf("%d",r);
    if(temp==r)
    {
        printf("given number is palindrome");
    }
    else{
        printf("given number is not palindrome");
    }
    

    return 0;
}
