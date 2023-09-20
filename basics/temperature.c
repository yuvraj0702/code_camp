#include<stdio.h>
int main ()
{
    float fahrenhite;
    float celsius;
     
     printf("Enter temperature in fahrenhite\n");
     scanf("%f",&fahrenhite);

     celsius = (fahrenhite - 32)/1.8;

     printf("Temperature in celsius is %f\n", celsius);
     return 0;
}
