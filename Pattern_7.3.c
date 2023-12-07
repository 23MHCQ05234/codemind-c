#include<stdio.h>
int main()
{
    int n,a,b,s;
    scanf("%d",&n);
    for(a=n;a>=1;a--)
    {
        for(s=1;s<=n-a;s++)
        {
            printf(" ");
        }
        for(b=a;b>=1;b--)
        {
            printf("%d ",b);
        }
        printf("
");
    }
}