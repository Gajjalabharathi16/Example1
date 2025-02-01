#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int sum=0;
	int n=sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<n;i++)
	{
		     sum+=arr[i]*arr[i];
	}
	printf("%d",sum);
}

