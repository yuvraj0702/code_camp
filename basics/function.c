#include<stdio.h>
void drawline()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            printf("@");
        }
        printf("\n");

    }
}
void main()
{
    drawline();
}
