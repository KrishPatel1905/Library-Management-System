#include<stdio.h>
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a=5;
    int b=10;
    swap(&a,&b);
    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);
    return 0;
}
