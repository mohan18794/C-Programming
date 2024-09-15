*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter a value\n");
    scanf("%d",&a);
    printf("enter b value\n");
    scanf("%d",&b);
    printf("enter c value\n");
    scanf("%d",&c);
    //printf("enter d value\n");
    //scanf("%d",&c);
   if(a>b&&a>c){
       if(b>c){
           d=b;
       }
       else{
           d=c;
       }
   
   }
    else if(b>c&&b>a){
        if(a>c){
            d=a;
        }
        else{
            d=c;
        }
    }
     else{
         if(b>a){
             d=b;
         }
         else{
             d=a;
         }
         
     
    }
    printf("%d",d);
      
        

    return 0;
}

