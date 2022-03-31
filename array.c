#include<stdio.h>
int main()
{
int a[100];
int limit,i;
printf("enter array limit ");
scanf("%d",&limit);
printf("enter a value");
for (i=0;i<limit;i++)
{
    scanf("%d",&a[i]);
}
printf("enterd values are = ");
for (i=limit-1;i>=0;i--)
{
    printf("%d \n",a[i]);
}
return 0;

}