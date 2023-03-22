#include<stdio.h>


int main()
{
    int arr[100], n, i;
    int num, count;

    printf("Enter total number of elements:");
    scanf("%d", &n);

    printf("Enter the array elements : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter number to find Occurance:");
    scanf("%d", &num);

    count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
            count++;
    }
    printf("Occurance of %d is: %d\n", num, count);
    return 0;
}