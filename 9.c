#include<stdio.h>
int main(){
    int a[10],i,j,count=0;
    printf("enter a 10  numbers \n ");
    for(i=0;i<10;i++)
    {
        scanf("%d",(a+i));
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(a+i)==*(a+j))
            {
                count++;
                break;
            }
        }
    }
    printf("The repeated element is =%d",count);
    return 0;
}