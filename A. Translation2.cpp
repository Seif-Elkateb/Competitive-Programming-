#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x,y,z;
    cin>>x>>y;
    int n=x.length();
    for (int i=n-1;i>=0;i--)
        z+=x[i];
    if(z==y)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
