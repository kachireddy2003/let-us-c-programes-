// to swaping of two numbers by the thired varable 
//with out using the thired varable
#include<stdio.h>
int main()
{
	int c,d,t;
	printf("enterr the first value ");
	scanf("%d",&c);
	printf("enter the second value of the ");
	scanf("%d",&d);
	c=10;
	d=20;
	c=c+d; //c=30;d=20
	d=c-d ;//c=30 d=10
    c=c-d ;//c=20 d=10
	//t=c;
	//c=d;
	//d=t;
	printf(" no after swaping%d\n",c);
	printf("no after the swaping%d",d);
}