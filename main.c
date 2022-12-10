#include<stdio.h>
#include<stdio.h>
int main()
{

    int r;
    char g;
    float p;
    printf("Enter your grade:");
    scanf("%c",&g);
    printf("Enter your roll no:");
    scanf("%d",&r);
    printf("Enter your per:");
    scanf("%f",p);
    printf("your grade is%c\n your roll no is%d\n your per is%.f",g,r,p);
    return 0;
}
