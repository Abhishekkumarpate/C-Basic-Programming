#include<stdio.h>
#include<math.h>
int main()
{
    int rad;
    printf("Enter radius:");
    scanf("%d",&rad);
    printf("Area is %f",3.14*pow(rad,2));
    printf("\ncircumfrence is %f",2*3.14*rad);
}