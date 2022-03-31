#include<stdio.h>
int main()
{
    int limit,a[100],i,j,temp;
    printf("enter a limit");
    scanf("%d",&limit);
    printf("enter a value");
    for (i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<limit-1;i++)
    {
        for (j=i+1;j<limit;j++)
        {
            if (a[i]>a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
            
            
        
        }
        
    
    }
    printf("sorted values");
            
            for (i=0;i<limit;i++)
            {
                printf("%d ", a[i]);
            }

    return 0;
    
}