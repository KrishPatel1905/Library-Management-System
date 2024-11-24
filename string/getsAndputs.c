#include<stdio.h>
#include<string.h.>
int main2()
{
char str[40];
scanf("%s",str);
printf(" Your output is : %s",str);
}
int main()
{
char str[40];

gets(str);//getting Output // we also use scanf but in scanf we dont use &--->scanf("%s",str);
puts(str);//printing output//we also use printf--->printf("%s",str);
main2();
return 0;
}
