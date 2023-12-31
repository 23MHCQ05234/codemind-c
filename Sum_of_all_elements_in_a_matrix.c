#include<stdio.h>
int main()
{
  int a,b,i,j;
  scanf("%d%d",&a,&b);
  int arr[a][b],sum=0;
  for(i=0;i<a;i++)
  {
      for(j=0;j<b;j++)
      {
        scanf("%d",&arr[i][j]);
        sum=sum+arr[i][j];
      }
  }
  printf("%d",sum);
}