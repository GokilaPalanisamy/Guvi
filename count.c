#include<stdio.h>
int main()
{
int a,i,sum;
scanf("%d",&a);
while(a>=0)
i=a%10;
if(i>0){
sum=sum+1;
a=a/10;
}
printf("%d",sum);
return 0;
}
