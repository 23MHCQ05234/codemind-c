#include<stdio.h>
int main()
{
    int t,Hours,Minutes;
    scanf("%d",&t);
    Hours=t/60;
    Minutes=t%60;
    printf("%d Hour(s) %d Minute(s)",Hours,Minutes);
}