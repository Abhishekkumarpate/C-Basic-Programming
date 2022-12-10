#include<stdio.h>
int main()
{
    int r;
    char g;
    float p;

    printf("Enter your grade,roll no and per:");
    scanf("%c%d%f",&g,&r,&p);
    printf("your grade is %c\nyour roll no is %d\n your per is%.2f",g,r,p);
}