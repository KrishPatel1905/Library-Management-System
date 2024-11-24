#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
    {
        fact=fact*i;    }
        return x;
}
int main()
{
    int n;
    int r;
    scanf("%d",&n);
    scanf("%d",&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}