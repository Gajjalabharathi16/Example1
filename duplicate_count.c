#include<string.h>
#include<stdio.h>
int main()
{
        int j;
        int flag=0;
	int count=0;
        int arr[8];
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("{");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("}");
	printf("\n");
        for(int i=0;i<8;i++)
        {
                for(int j=i+1;j<8;j++)
                {
                        if(arr[i]==arr[j])
			{
		   	        count++;
				printf("count of duplicate element %d is %d\n",arr[i],count);
				flag=1;
			}
                }

        }
   
}
