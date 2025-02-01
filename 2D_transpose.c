#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 4
int main()
{        
...
        int mat1[row][col] = {{3,2,1,5},{6,5,8,2},{9,3,4,1}};
        int mat2[col][row];
        for(int i = 0;i < col;i++)
        {
                for(int j = 0;j < row;j++)
                        mat2[i][j] = mat1[j][i];
        }
        for(int i = 0;i < col;i++)
        {
                for(int j = 0;j < row;j++)
                {
                printf("%d ",mat2[i][j]);
                }
                printf("\n");
        }
}
