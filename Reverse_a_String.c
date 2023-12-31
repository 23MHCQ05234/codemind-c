#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int i,j,len=0,tem;
    for(i=0;str[i]!=NULL;i++)
    {
        len=len+1;
    }
    i=0;
    j=len-1;
    while(i<=j)
    {
        tem=str[i];
        str[i]=str[j];
        str[j]=tem;
        i++;
        j--;
    }
    printf("%s
",str);
}