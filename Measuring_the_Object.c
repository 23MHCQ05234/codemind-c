#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w==x+y || w==y+z || w==x+z || w==x || w==y || w==z)
    printf("YES");
    else
    printf("NO");
}