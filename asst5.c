#include<stdio.h>
int main()
{
    int n,d;
    float c,a;
    printf("The radius of circle is:");
    scanf("%d",&n);
    d=2*n;
    c=2*3.14*n;
    a=3.14*n*n;
    printf("The diameter is:%d",d);
    printf("\nThe circumference is:%f",c);
    printf("\nThe area is:%f",a);
    return 0;
}