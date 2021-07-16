#include<stdio.h>
int main()
{
    int i,a[5],*p,even[10],odd[10],j=0,k=0;
    for(i=0;i<5;i++)
    {
      printf("enter a number ");
      scanf("%d",(a+i));

    }
    for(i=0;i<5;i++)
    {
    if(*(a+i)%2==0)
    {
        even[j]=*(a+i);
        j++;
    }
    else{
        odd[k]=*(a+i);
    k++;        
    }
    }
    printf("the number of even  is :");
    for(i=0;i<j;i++){
        printf(" %d ",even[i]);
    }
    printf("\nthe number of odd is :\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}