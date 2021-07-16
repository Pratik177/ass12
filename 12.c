#include<stdio.h>
int main()
{
    int n;
    printf("enter a n number of array :");
    scanf("%d",&n);
    int a[n],i,pos,ele;
    int *p,*q;
    printf("enter a %d element \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("enter a element to enter ");
    scanf("%d",&ele);
    printf("enter a position to enter ");
    scanf("%d",&pos);  
    for(i=n-1;i>=pos;i--)
    {
        *(a+(i+1))=*(a+i);
    }
    *(a+pos)=ele;
    for(i=0;i<=n;i++)
    {
        printf("%d \t",*(a+i));
    }
    return 0;
}