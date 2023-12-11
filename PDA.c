#include<stdio.h>
int main()
{
    int i,n,fac=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            fac=fac+i;
        }
    }
    if(fac==n)
    printf("PERFECT");
    else if(fac<n)
    printf("DEFICIENT");
    else
    printf("ABUNDANT");
}