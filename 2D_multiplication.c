#include<stdio.h>
#include<stdlib.h>
#define row1 3
#define col1 4
#define row2 col1
#define col2 2
int main()
{
  int i,j,k;
  int mat1[row1][col1] = {{2,1,4,3},{5,2,7,1},{3,1,4,2}};
  int mat2[row2][col2] = {{1,2},{3,4},{2,5},{6,2}};
  int mat3[row1][col2];
  for(i=0;i<row1;i++)
  {
          for(j=0;j<col2;j++)
          {
                  mat3[i][j] = 0;
                  for(k=0;k<col1;k++)
                          mat3[i][j] += mat1[i][k] * mat2[k][j];
          printf("%d ",mat3[i][j]);
          }
          printf("\n");
  }
}
