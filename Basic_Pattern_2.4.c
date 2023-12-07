#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=n;a>=1;a--)
    {
        for(b=a;b<=n;b++)
        {
            printf("%d ",b);
        }
        printf("
");
    }
}