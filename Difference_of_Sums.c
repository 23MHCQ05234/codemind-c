#include<stdio.h>
int main()
{
    int i,n,sum=0,a,b=0,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i*i;
        sum=sum+a;
        b=b+i;
    }
    c=b*b;
    d=c-sum;
    printf("%d",d);
}