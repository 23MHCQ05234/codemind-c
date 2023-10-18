#include<stdio.h>
int main()
{
    int unit;
    float cost,t,bill;
    scanf("%d",&unit);
    if(unit<=199)
    {
       cost=1.20;
    }
    else if(unit>=200 && unit<=400)
    {
        cost=1.50;
    }
    else if(unit>=400 && unit<=600)
    {
        cost=1.80;
    }
    else
    {
        cost=2.00;
    }
    bill=unit*cost;
    if(bill>400)
    {
        t=bill+(bill*1*0.15);
    }
    else
    {
        t=bill+100;
    }
    printf("%.2f",t);
    
}