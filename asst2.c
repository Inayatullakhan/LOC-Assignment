#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter two numbers:");
    scanf("%d %d",&n,&m);
    if(n>m)
        printf("The greatest number is: %d",n);
    else
        printf("The greatest number is: %d",m);
     return 0;
}