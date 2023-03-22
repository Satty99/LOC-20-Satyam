#include<stdio.h>
void main()
{
    int a[6],b[6];
    printf("Enetr the array elements:");
    for(int i=1;i<=6;i++)
    {
        scanf("%d",&a[i]); 
    } 
    for(int i=1;i<=6;i++)
    {
        if(a[i]>0)
            printf("%d ",a[i]);
    }
     for(int i=1;i<=6;i++)
    {
        if(a[i]<0)
            printf("%d ",a[i]);
    }
}