#include <stdio.h>

int main()
{
    int a=3,b=4,flag=0;
    if(a<b){
        label1:
        printf("a\n");
        if(flag==0)
        {
            flag=1;
            goto label2;
        }
    label2:
    printf("b\n");
    if(flag==0)
    {
       flag=1;
        goto label1;
    
    }
    return 0;

}
}

