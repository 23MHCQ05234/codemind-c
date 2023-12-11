#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",n-i+1);
        }
        for(k=1;k<=i-1;k++)
        {
            printf("*");
        }
        printf("
");
    }
}