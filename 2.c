#include<stdio.h>
int main()
{
    int i,a[5],*p,even=0,odd=0;
    for(i=0;i<5;i++)
    {
      printf("enter a number ");
      scanf("%d",(a+i));

    }
    for(i=0;i<5;i++)
    {
    if(*(a+i)%2==0)
    {
        even ++;
    }
    else{
        odd++;
    }
    }
    printf("the number of even  is :%d \n",even);
    printf("the number of odd is :%d\n",odd);
    return 0;
}