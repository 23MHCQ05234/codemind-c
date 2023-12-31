#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a==arr[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}