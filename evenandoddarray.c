#include<stdio.h>
int main()
{
    int limit,i,a[100],ecount=0,ocount=0;
    printf("enter a  limit");
    scanf("%d",&limit);
    printf("enter a value");
    for (i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);

    }
    for (i=0;i<limit;i++)
    {
        if (a[i]%2==0)
        {
            ecount++;
        }
        else
        {
            ocount++;
        }
        
    }
    printf("no of even numbers %d",ecount);
    printf("no of odd num %d",ocount);
return 0;
}