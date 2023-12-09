#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m+1;i<n;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}