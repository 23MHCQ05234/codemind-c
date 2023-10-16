#include<stdio.h>
int main()
{
    float x,area,perimeter;
    scanf("%f",&x);
    area=3.14*x*x;
    perimeter=2*3.14*x;
    printf("%.2f
%.2f",area,perimeter);
}