#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a>0)
{
printf("%d is positive",a);
}
else if(a==0)
{
printf("%d is zero",a);
}
else
{
printf("%d is negative",a);
}
return 0;
}
