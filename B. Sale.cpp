#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x[n];
    for (int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    int sum=0;
    for (int i=0;i<m;i++)
    {
        if(x[i]<0)
        sum+=abs(x[i]);

    }
    cout<<sum;

    return 0;
}
