#include<stdio.h>
int main()
{
    float i,n,sum=0 ;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(float)1/i; 
    }
    printf("%.2f",sum);
}