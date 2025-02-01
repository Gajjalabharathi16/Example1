#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr[3];
	int col=4;

	for(int i=0;i<3;i++)
	{
		ptr[i]=(int *)malloc(col*sizeof(int));
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&ptr[i][j]);
		}
	}
	 for(int i=0;i<3;i++)
        {
                for(int j=0;j<4;j++)
                {
			printf("%d ",ptr[i][j]);
			
		}

		printf("\n");
        }
	 for(int i=0;i<3;i++)
	 {
		 free(ptr[i]);
	 }
}
