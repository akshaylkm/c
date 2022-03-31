#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("enter 2 number");
    scanf("%d%d",&num1,&num2);
    printf("1 is addition \n 2 is subtraction \n 3 is multiplicion \n 4is division \n enter your choice");
    scanf("%d",&choice);
    if (choice==1)
    {
       result=num1+num2;
    }
    else if (choice==2)
    {
        result=num1-num2;
    }
    else if (choice==3)
    {
       result=num1+num2;
    }
    else if (choice==4)
    {
        result=num1/num2;
    }
    
    else
    {
        printf("you are a myran");
    }
    printf("result=%d",result);
    return 0;
}