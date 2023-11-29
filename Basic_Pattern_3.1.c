#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n-a+1;b++)
        {
            printf("* ");
        }
        printf("
");
    }
}