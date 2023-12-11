#include<stdio.h>
#include<math.h>
int main()
{
    float i,a,b,sum=0,c;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=sqrt(i);
        sum=sum+c;
    }
    printf("%.2f",sum);
}