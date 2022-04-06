//to covetion of km and into other forms 
#include<stdio.h>
int main()
{
    int km,m,f,in,cm;
    printf("enter the distance between two citys");
    scanf("%d",&km);
    m=km*1000;
    f=km*3280;
    in=km*39370;
    cm=km*100000;
    printf("%d\n%d\n%d\n%d\n%d\n",km,m,f,in,cm);
}