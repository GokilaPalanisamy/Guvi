#include<stdio.h>
int Linearsearch(int a[], int n){
int i;
if(a[i]==i){
return i;
}
return -1;
}
int main(){
int *a;
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Value is equal %d",Linearsearch(a,n));
getchar();
return 0;
}
