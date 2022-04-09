// c program to print the floyds triangle 
#include<stdio.h>
int main()
{
    int c,n,i,j;
    printf("enter the value of  the c");
    scanf("%d",&c);
    printf("enter the value of  the n");
    scanf("%d",&n);
     for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}