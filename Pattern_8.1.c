#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n;b++)
        {
            if(a==b || a+b==n+1)
            printf("%d ",a);
            else
            printf(" ");
        }
        printf("
");
    }
}