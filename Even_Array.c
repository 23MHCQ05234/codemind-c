#include<stdio.h>
int main()
{
    int n,dc=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            dc++;
        }
    }
    if(dc==n)
    printf("True");
    else
    printf("False");
}