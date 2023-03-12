#include<stdio.h>
void main()
{
    char ch;
    int a,b,sum,sub,mul,div;
    printf("Enter a character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case'+':
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
            sum=a+b;
            printf("The sum of number is %d+%d=%d",a,b,sum);
            break;
        case'-':
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
            sub=a-b;
            printf("The substraction of number is %d-%d=%d",a,b,sub);
            break;
        case'*':
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
            mul=a*b;
            printf("The multiplication of number is %d*%d=%d",a,b,mul);
            break;
        case'/':
            printf("Enter two numbers:");
            scanf("%d %d",&a,&b);
            div=a/b;
            printf("The division of number is %d/%d=%d",a,b,div);
            break;
        default:
            printf("No Operation");
    }
        
}