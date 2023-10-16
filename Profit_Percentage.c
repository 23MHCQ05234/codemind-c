#include<stdio.h>
int main()
{
    float X,Y,profit;
    scanf("%f%f",&X,&Y);
    profit=Y-X;
    printf("%.2f",(profit*100)/X);
}