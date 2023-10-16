#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,Amount,CI;
    scanf("%f%f%f",&P,&R,&T);
    Amount=P*(pow((1+R/100),T));
    CI=Amount-P;
    printf("%.2f",CI);
}