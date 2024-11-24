#include<stdio.h.>
int main()
{
    
    char str[40];
    scanf("%[^\n]s",str);
    printf("Your output is : %s\n",str);
    int size=0;
    int i=0;
    while(str[i]!='\0')
    {
        size++;
        i++;

    }
    printf("Your string size is : %d",size);//In this case we don't consider '\0' bcz we  just cheack size of string
    
    
    return 0;
}