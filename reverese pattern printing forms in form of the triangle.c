// c program to print the inverted half triangle 
#include<stdio.h>
int main()
{
	int n, i, j;
	printf("enter the n value ");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("  \n");
	}
}