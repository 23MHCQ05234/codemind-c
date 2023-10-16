#include<stdio.h>
int main()
{
    float X,Y,loss;
    scanf("%f%f",&X,&Y);
    loss=X-Y;
    printf("%.2f",(loss*100)/X);
}