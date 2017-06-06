#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d",&a);
    scanf("%d",&n);
    for(i=1;i<n;i++){
        a=a*a;
    }
    printf("%d",a);
    return 0;
}    
