#include<stdio.h>
int main()
{
  int limit,i,a[100],searchkey,flag=0;
  printf("enter a limit");
  scanf("%d",&limit);
  printf("enter a value");
  for (i=0;i<limit;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("enter search key");
  scanf("%d",&searchkey);
  for (i=0;i<limit;i++)
  {
    if (searchkey==a[i])
    {
        flag=1;
        break;
    }
  }
    if (flag==1)
    {
        printf("value find at position %d" );
    }
    else
    {
        printf("value not found");
    }
    
    
  
  
  return 0;
}