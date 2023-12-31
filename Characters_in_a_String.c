#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    int i,dc=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            break;
        }
        else
        {
            dc++;
        }
    }
    str[i]=NULL;
    printf("%d",dc);
}