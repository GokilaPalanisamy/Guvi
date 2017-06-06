#include <stdio.h>
int main()
{
   int num, n=0, r,temp;
   printf("Enter an integer: ");
   scanf("%d", &num);
   temp=num;
   while(temp!=0)
   {
       r=temp%10;
      n=n*10+r;
      temp/=10;
   } 
   if(n==num) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}
