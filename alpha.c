#include<stdio.h>
#include<conio.h>
int main()
{
char c;
int vs,vc;
clrscr();
printf("Enter a character:");
scanf("\n%c",&c);
vs=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
vc=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(vs||vc)
{
printf("\n%c is a vowel",c);
}
else
{
printf("\n%c is a consonant",c);
}
getch();
return 0;
}


