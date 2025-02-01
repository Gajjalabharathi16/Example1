#include<stdio.h>
int main()
{
	int matrix[3][3];
	printf("enter 9 elements for 3*3 matrix:\n");
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("the elemts in [%d][%d] is ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n the 3*3 matrix is\n");
	 for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {
                       // printf("the elemts in [%d][%d] is ",i,j);
                        printf("%d ",matrix[i][j]);
                }
		printf("\n");
        }
}

