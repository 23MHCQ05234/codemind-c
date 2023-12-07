#include<stdio.h>
int main()
{
    int n,a,b,s;
    scanf("%d",&n);
    for(a=n;a>=1;a--)
    {
        for(s=1;s<=a-1;s++)
        {
            printf(" ");
        }
        for(b=a;b<=n;b++)
        {
            printf("%d ",b);
        }
        printf("
");
    }
}