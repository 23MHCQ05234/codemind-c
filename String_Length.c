#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    scanf("%[^
]s",s1);
    int len=strlen(s1);
    printf("%d",len);
}