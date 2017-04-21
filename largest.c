#include<stdio.h>
int main()
{
int a,b,c;
printf("\nEnter three numbers one by one:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is the largest number");
}
else if(c>a && c>b)
{
printf("\nc is the largest number");
}
else
{
printf("\nb is the largest number");
}
return 0;
}

