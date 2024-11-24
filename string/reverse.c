#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
   scanf("%[^\n]s",str);
    printf("Your Output is : %s\n",str);
    int size=0;
    for(int k=0;str[k]!='\0';k++)
    {
        size++;

    }
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
            }
        printf("revers string is :");
            puts(str);
    
    
    return 0;
}