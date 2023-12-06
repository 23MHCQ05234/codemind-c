#include<stdio.h>
int main()
{
    int n,rows,cols,s;
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(s=1;s<=n-rows;s++)
        {
            printf(" ");
        }
        for(cols=1;cols<=rows;cols++)
        {
            printf("* ");
        }
        printf("
");
    }
}