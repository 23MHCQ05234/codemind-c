#include<stdio.h>
int main()
{
    int n,a,b,s;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(s=1;s<=a-1;s++)
        {
            printf(" ");
        }
        for(b=1;b<=n-a+1;b++)
        {
            printf("%d ",n-a+1);
        }
        printf("
");
    }
    
}