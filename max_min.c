#include<stdio.h>
int main()
{
	int n,max,min;
	int arr[6];
	n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
			max=arr[i];
	}
	printf("min num is %d\n",min);
	printf("max num is %d\n",max);
}

