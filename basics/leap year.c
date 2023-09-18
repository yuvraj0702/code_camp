#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year ");
    scanf("%d",&a);
    if(a%4==0)
    printf(" year is a leap");
    else
    printf(" not a leap year");
}
