#include<stdio.h>
int main()
{
    int a[10],b[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("enter a number ");
        scanf("%d",(a+i));
    }
    printf("the number in reverse order is :");
    for(i=9;i>=0;i--)
    {
        *(b+i)=*(a+i);
        printf("%d ",*((b+i)));
    }
    return 0;
}