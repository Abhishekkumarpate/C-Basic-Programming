#include<stdio.h>
#include<math.h>
int main()
{
    int rad;
    float ar,circ;
    printf("Enter radius:");
    scanf("%d",&rad);
    ar=3.14*pow(rad,2);
    circ=2*3.14*rad;
    printf("\ncircumfrence is %f",circ);
}