#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=0;a<=n-1;a++)
    {
        for(b=1;b<=n;b++)
        {
            printf("%d ",a%2);
        }
        printf("
");
    }
}