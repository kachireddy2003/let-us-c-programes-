#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the fahrenheit");
    scanf("%f",&f);
    c=(f-32)*5/9;// /to cto f (1.8*c)+32;
    printf("%f",c);
}