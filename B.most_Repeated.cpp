#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
for (int k=0;k<t;k++)
{


string x;
cin>>x;
sort(x.begin(),x.end());
int n=x.length();
int cnt=0;
char r;
for (int i=0;i<n;i++)
{
    int temp=0;
    for (int j=i;x[j]==x[j+1];j++,i++,temp++);
    if(temp>cnt)
    {
        r=x[i-1];
        cnt=temp;
    }
}
cout<<r<<endl;
}



}
