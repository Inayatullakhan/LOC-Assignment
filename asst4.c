#include <stdio.h>

void main() 
{
    char ch;
    int a,b,c;
    printf("Enter an operation");
    ch=getchar();
    printf("operation= %c",ch) ;
    printf("\n ENTER TWO NUMBERS");
    scanf("%d %d",&a, & b);
    switch (ch)
    {
    case '+':
    c=a+b;
    printf("ADDITION=%d",c);
    break;
    case '-' :
    c=a-b;
    printf("SUBTRACTION=%d",c);
    break;
    case '*':
    c=a*b;
    printf("MULTIPLICATION=%d",c);
    break;
    case '/' :
    c=a/b;
    printf("DIVISION=%d", c);
    break;
    case '%' :
    c=a%b;
    printf("REMAINDER=%d", c);
    break;
    default:
    printf("WRONG OPERATION");
    }
}