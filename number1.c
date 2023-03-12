#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
		{
			printf("%d \n",i);
		}
		else if(i%3==0)
		{
			printf("Fizz\n");
		}
		 else if(i%5==0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n",i);
		}

    }
}