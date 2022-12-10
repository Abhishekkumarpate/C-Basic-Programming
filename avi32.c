#include<stdio.h>
int main()
{
    int rad;
    float ar,circ;
    printf("Enter radius:");
    scanf("%d",&rad);
    ar=3.14*rad*rad;
    circ=2*3.14*rad;
    printf("\ncircumfrence is %f",circ);
}