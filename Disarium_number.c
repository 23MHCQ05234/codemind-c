#include<stdio.h>
#include<math.h>
int main()
{
    int i,r,r1,n,dc=0,sum=0;
    scanf("%d",&n);
    int t=n;
    i=n;
    while(n!=0)
    {
        r=n%10;
        dc=dc+1;
        n=n/10;
    }
    while(t!=0)
    {
       r1=t%10;
       sum=sum+pow(r1,dc);
       t=t/10;
       dc--;
    }
    if(sum==i)
    printf("True");
    else
    printf("False");
}