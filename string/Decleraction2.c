#include<stdio.h>
int main()
{
    char arr[]="Hey, my name is Krish\0 ";
    int i=0;
    while(arr[i]!='\0')//Using null charater//when we don't count the number of charater thrn we will use null cha. 
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
