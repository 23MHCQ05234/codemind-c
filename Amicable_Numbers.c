#include<stdio.h>
int main()
{
    int i,n,m,p=0,q=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        p=p+i;
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        q=q+i;
    }
    if(p==m && q==n)
    printf("Amicable");
    else
    printf("Not Amicable");
}