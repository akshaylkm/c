#include<stdio.h>
void main()
{
int originaln,n,rem,sum=0;
printf("enter the value: ");
scanf("%d",&originaln);
n=originaln;
while(n!=0)
{
rem = n%10;
sum = sum*10+rem;
n=n/10;
}
if(sum==originaln)
printf("palindrome");
else
printf("not palindrome");
}
