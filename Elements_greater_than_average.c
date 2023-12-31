#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a],i,sum=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    int avg=sum/a,c=0;
    for(i=0;i<a;i++)
    {
        if(avg<=ar[i])
        {
            c++;
        }
    }
    printf("%d",c);
}