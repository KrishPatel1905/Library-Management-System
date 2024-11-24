#include<stdio.h>
#include<math.h>
int formula(int a,int b, int c)
{
int s;
s=(a+b+c)/3;
printf("Value of s is :");
printf("%d",s);
int A;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Value of A is :");
printf("%d",A);


}

int check(int a,int b,int c)
{

if(a+b>c&&b+c>a&&a+c>b)
{
printf("Value is valied");

}
else{
    printf("Value is not valied ");
}
int formula(a,b,c);
}
int main()
{
    printf("LET START :\n");
    printf("Enter the first side :");
    int a;
    scanf("%d",&a);
    printf("Enter the second side:");
    int b;
    scanf("%d",&b);
    printf("Enter the thried side :");
    int c;
    scanf("%d",&c);
    int check(a,b,c);
    
    
    
    return 0;
}