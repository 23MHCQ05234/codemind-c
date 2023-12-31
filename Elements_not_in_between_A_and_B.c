#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b,c,d;
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(arr[i]<b || arr[i]>c)
        {
            printf("%d ",arr[i]);
            d++;
        }
    }
    if(d==0)
    printf("-1");
}