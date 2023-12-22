#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=ar[0];
    for(i=0;i<n;i++)
    {
        if(min<ar[i])
        {
            min=ar[i];
        }
    }
    printf("%d",min);
}