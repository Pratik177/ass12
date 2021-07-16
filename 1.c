#include<stdio.h>
int main()
{
    int a[10],*p;
    float b=0;
    double avg;
int i;
printf("enter a 10 number \n");
for(i=0;i<10;i++)
{
scanf("%d",(a+i));
}
for(i=0;i<10;i++)
{
    b=b+*(a+i);
    avg=b/10;
    
}
printf("the sum is : %f\n",b);
printf("the avg is :%lf",avg);
return 0;
}