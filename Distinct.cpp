#include<iostream>
#include<algorithm>
using namespace std;
{
void Distinct(int arr[],int n){
for(int i=0;i<n;i++)
{
int j;
for(j=0;j<n;j++)
{
if(arr[i]==arr[j])
break;
if(i==j)
cout<<arr[i]<<endl;
}
}
}
int main(){
int arr[100];
int n;
cin>>n;
for(i=0;i<n;i++)
cin>>arr[i];
Distinct(arr,n);
return 0;
}
