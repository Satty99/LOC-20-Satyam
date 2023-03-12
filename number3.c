#include<stdio.h>
void main()
{
    int n,c,r ,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }while(n!=0);
    printf("The sum of digit is %d",sum);
}