#include<stdio.h>
#include<string.h>

void reverse(char str[]);
int main()
{
	char str[100];
	printf("enter a name: ");
	scanf("%s",str);
	reverse(str);
	printf("%s",str);

}
void reverse(char str[])
{
	char first=0;
	char temp;
	char last=strlen(str)-1;	
	while(first < last)
	{
		temp=str[first];
		str[first]=str[last];
		str[last]=temp;

		first++;
		last--;
	}
}
			



		
		
