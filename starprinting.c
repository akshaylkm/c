#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}