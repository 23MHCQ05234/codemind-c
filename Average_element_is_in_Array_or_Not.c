#include<stdio.h>
int main()
{
    int n,i,avg;
    float sum=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    if(sum/n<i)
    printf("True");
    else
    printf("False");
}