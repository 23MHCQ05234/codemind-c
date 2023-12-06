#include<stdio.h>
int main()
{
    int n,rows,cols,s;
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(s=1;s<=rows-1;s++)
        {
            printf(" ");
        }
        for(cols=1;cols<=n-rows+1;cols++)
        {
            printf("* ");
        }
        printf("
");
    }
}