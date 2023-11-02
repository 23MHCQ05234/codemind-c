#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d%d",&m,&n);
    for(i=n;i>=m;i--)
    {
        printf("%d ",i);
    }
}