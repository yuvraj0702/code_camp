#include <stdio.h>

int main()
{
    int a,b,option;
    printf("Enter first number:");
    scanf("%d",&a);

    printf("Enter second number:");
    scanf("%d",&b);

    printf("\npress 1 for additon");
    printf("\npress 2 for substraction");
    printf("\npress 3 for multiplication");
    printf("\npress 4 for divisson");
    scanf("%d",&option);
    switch (option)
{
    case 1:
    printf("sum = %d",a+b);
    break; 
    case 2:
    printf("substraction = %d",a-b);
    break;
    case 3:
    printf("multiplication = %d",a*b);
    break;
    case 4:
    printf("divissson = %f",(float)a/b);
    break;
}
} 
