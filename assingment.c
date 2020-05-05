#include<stdio.h>
int main()
{
    int m[4][4];
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d\n",&m[i][j]);
        }
    }
    printf("The diagonal elements are:\n");
    for(int i=0;i<4;i++)
    {
        printf("%3d\n",m[i][i]);
    }
    return 0;
}
