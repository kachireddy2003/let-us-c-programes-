#include<stdio.h>
int main()
{
	int bs,da,hr,gr;
	printf("enter the basic salary ");
	scanf("%d",&bs);
	da=bs*0.4;
	hr=bs*0.2;
	gr=bs+da+hr;
	printf("dearness allvences%d\n",da);
	printf(" house rent %d\n",hr);
	printf(" groess salary %d\n",gr);
}