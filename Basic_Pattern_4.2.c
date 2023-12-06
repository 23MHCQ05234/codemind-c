#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=0;b<=n-1;b++)
        {
            printf("%d ",a%2);
        }
        printf("
");
    }
}