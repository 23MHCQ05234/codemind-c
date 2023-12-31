#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int b,c=0;
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(b==ar[i])
        {
            c++;
        }
    }
    printf("%d",c);
}