#include<string.h>
#include<stdio.h>
int main()
{
	int j;
	int flag=0;
	int arr[]={1,2,3,4,5,6,7};
	for(int i=0;i<8;i++)
	{	
		for(int j=i+1;j<8;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("duplicate element is %d\n",arr[i]);
				flag=1;
			}
		}

	}
	if(flag==0)
	{
		printf("no duplicate elements");
	
}
}
