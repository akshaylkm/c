#include<stdio.h>
int main()
{
    int num;
    printf("enter a value");
    scanf("%d",&num);
    if (num>0)
    {
      printf("number is positive");
    }
    else if (num<0)
    {
      printf("number is negitive");
    }
    return 0;
}