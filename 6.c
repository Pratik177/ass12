#include<stdio.h>
int main()
{
    int a[10],b,p;
    int i;
    for(i=0;i<10;i++)
    {
        printf("enter a number :");
        scanf("%d",(a+i));
    }
    printf("enter a paricular number to search :"); 
         scanf("%d",&b);
         for(i=0;i<5;i++) 
         {
             if(*(a+i) ==b)
             {
                 printf("the element found :%d\nd",*(a+i));
                 return 0;
             }
         }
                 printf("there is no particular number");
         
             return 0;
         
}