#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter 2 number");
    scanf("%d%d",&number1,&number2);
    if(number1>number2)
    {
        printf("greatest number is %d",number1);
    }
    else
    {
        printf("greatest number is %d",number2);
    }
    return 0;
    
}