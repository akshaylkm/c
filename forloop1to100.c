#include<stdio.h>
int main()
{
  int number,i,sum;
  printf("enter a number");
  scanf("%d",&number);
  for (i=1;i<number;i++)
  {
    sum=sum+1;
  }
  printf("result = %d",sum);
  return 0;
  
} 