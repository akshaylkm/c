#include<stdio.h>
int main()
{
    int num,temp1=0,temp2=1,i;
    int next_term=temp1+temp2;
    printf("enter a number");
    scanf("%d",&num);
    printf("%d %d ",temp1,temp2);
    for (i=0;i<=num;i++)
    { 
        printf("%d ",next_term);
        temp1=temp2;
        temp2=next_term;
        next_term=temp1+temp2;
    }
    return 0;



}

