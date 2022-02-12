#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
        {
            printf("The even number is: %d" ,n);
            break;
        }
        case 1:
        {
            printf("The odd number is: %d" ,n);
            break;
        }

    }
    return 0;
 }
