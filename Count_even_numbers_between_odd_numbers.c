#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,c=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if((arr[i-1])%2!=0 && arr[i]%2==0 && (arr[i+1])%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}