#include<stdio.h>
int main()
{
    int reg_no;
    char name[20];
    char branch[20];
    char hobby[20];
    printf("Enter your name:");
    gets(name);
    printf("\nEnter your branch:");
    gets(branch);
    printf("\nEnter your hobby:");
    gets(hobby);
    printf("Enter your Registration number:");
    scanf("%d",&reg_no);
    printf("Registration number: %d",reg_no);
    printf("\nName:");
    puts(name);
    printf("Branch:");
    puts(branch);
    printf("Hobby:");
    puts(hobby);
    return 0;
}