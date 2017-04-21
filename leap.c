#include<stdio.h>
int main()
{
int a,b;
printf("Enter  year:");
scanf("%d",&a);
b=a%4;
if(b==0)
printf("\n%d is a leap year",a);
else
printf("\n%d is not a leap year",a);
return 0;
}
