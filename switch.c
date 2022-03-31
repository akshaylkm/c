#include<stdio.h>
int main()
{
    int choice;
    printf("1 for monitor \n 2 for ups \n 3 for cpu \n 4 for mobile \n enter your choice ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("you have selected monitor");
        break;
        case 2:
        printf("you have selected ups");
        break;
        case 3:
        printf("you have selected cpu");
        break;
        case 4:
        printf("you have selected mobile");
        break;
    
    default:
    printf("4 option ullu myre");
       
    }
    return 0;
}