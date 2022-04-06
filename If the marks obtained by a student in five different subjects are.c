// to calculate the total and percentage of the student
#include<stdio.h>
int main()
{
    int te,hi,en,ma,sc,total,per;
    printf("enter te,hio,en,ma,sc,");
    scanf("%d%d%d%d%d",&te,&hi,&en,&ma,&sc);
    total=te+hi+en+ma+sc;
    per=total/5;
    printf("%d\n  aggregate",total);
    printf("%d\n",per);//aggregate means total
}