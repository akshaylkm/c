#include<stdio.h>
int main()
{
    int num,i,sum=5;
    printf("enter a number");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        sum=sum+i;
        printf("i*sum");
    }
    

return 0;
    
}