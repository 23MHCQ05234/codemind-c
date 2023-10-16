#include<stdio.h>
int main()
{
    float basic,HRA,DA,PF,Gross;
    scanf("%f%f%f",&basic,&HRA,&DA);
    PF=0.12*basic;
    Gross=basic+HRA+DA+PF;
    printf("%.2f
%.2f",PF,Gross);
}