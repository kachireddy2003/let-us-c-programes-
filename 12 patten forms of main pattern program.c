// to print the pattern program inth eshap of the priramid 
#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("enter the n value no of rows ");
	scanf(" %d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("%d ",j);// keep the blank  space // diffference between the right half trianglre and thid is ythe only difference is 
			//------blank space in betwwen them //
		}
		    printf("\n");
	}
}