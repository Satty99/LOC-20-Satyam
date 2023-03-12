#include<stdio.h>
void main()
{
    int r;
    float crm,area;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    crm=2*3.14*r;
    area=r*r*(3.14);
    printf("The circumference of cirle is %f \n",crm);
    printf("The area of circle is %f",area);
}