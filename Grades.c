#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,x;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    x=(s1+s2+s3+s4+s5)*100/500;
    if(x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=70)
    {
        printf("Grade C");
    }
    else if(x>=60)
    {
        printf("Grade D");
    }
    else if(x>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}