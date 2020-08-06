#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string x,y,z;
    int one=0,two=0;
    for (int i=0;i<n;i++)
    {
        cin>>z;
        if(i==0)
            x=z;
        if(z!=x)
            y=z;
        if(z==x)
            one++;
        else
            two++;
    }
    if(one>two)
        cout<<x;
    else
        cout<<y;
    return 0;
}
