#include<stdio.h>
int main(){
int a[10],i,j,temp=0;
printf("enter a 10 number \n");
for(i=0;i<9;i++)
{
    scanf("%d",(a+i));
}
for(i=0;i<9;i++)
{
    for(j=i;j<9;j++)
    {
        if(*(a+i) > *(a+j))
       { temp=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=temp;}
    }
}
printf("the number in ascending order is :");
for(i=0;i<9;i++)
{
    printf("%d ",*(a+i));
}
return 0;

}