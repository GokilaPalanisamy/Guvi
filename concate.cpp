#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int myCompare(string x,string y)
{
string xy=x.append(y);
string yx=y.append(x);
return xy.compare(yx)>0?1:0;
}
int main()
{
vector<string> arr;
arr.pushback(arr);
printLargest(arr);
return 0;
}
