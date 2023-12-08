#include<stdio.h>
int main()
{
    int n,a,max=0;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        if(max<a)
        {
            max=a;
        }
        n=n/10;
    }
    printf("%d",max);
}