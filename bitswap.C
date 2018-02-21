#include<stdio.h>
int main()
{
int s,m;
printf("\nEnter the two numbers:");
scanf("%d %d",&s,&m);
s^=m;
m^=s;
s^=m;
printf("\nSwapped values are:%d %d",s,m);
return 0;
}
