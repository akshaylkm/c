#include<stdio.h>
int main()
{
    int num,i,sum;
    printf("enter a number");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
      sum=sum+1;
    }
    printf("result=%d",sum);
    return 0;
    


}