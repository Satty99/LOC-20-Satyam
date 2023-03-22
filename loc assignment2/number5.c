#include<stdio.h>
void main()
{
    int a[6],b[6];
    printf("Enetr the array elements:");
    for(int i=1;i<=6;i++)
    {
        scanf("%d",&a[i]);   
    } 
    
    printf("The first array is:");
    for(int i=1;i<=6;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=1;i<=6;i++)
    {
        b[i]=a[i];
    }
    printf("\n The second array is:");
    for(int i=1;i<=6;i++)
    {
        printf("%d ",b[i]);
    }

}