#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;

    int x[12];
    for (int i=0;i<12;i++)
        cin>>x[i];
    if(k==0)
    {
        cout<<0;
        return 0;
    }
    sort(x,x+12,greater<int>());

    for (int i=0;i<12;i++)
    {

        k-=x[i];
        if(k<=0)
        {
            cout<<i+1;
            return 0;
        }

    }
    cout<<-1;




    return 0;
}
