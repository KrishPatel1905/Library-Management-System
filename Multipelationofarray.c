#include<stdio.h>
int main()
{
int a[3][2]={{1,2},{3,4},{5,6}};
//1 2
//3 4
//5 6
int b[2][3]={{1,2,3},{4,5,6}};
//1 2 3
//4 5 6
int res[3][3];

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        res[i][j]=0;
        for(int k=0;k<2;k++)
        {
            res[i][j]+=a[i][k]*b[k][j];
        }
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d ",res[i][j]);
    }
    printf("\n"); 
}
return 0;

}