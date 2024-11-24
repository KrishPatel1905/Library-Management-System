#include<stdio.h>
void home(){
printf("Finally you in your home\n");


}
void mehsana(){
printf("You are reach mehsana\n");


}
void ahemdabad()
{
    printf("You are reach ahemdabad\n");
    mehsana();
    
}
void nadiad()
{
    printf("You are reach  nadiad\n");
    ahemdabad();
    
}
int main()
{
    printf("You are in changa\n");
    nadiad();
    return 0;
}
