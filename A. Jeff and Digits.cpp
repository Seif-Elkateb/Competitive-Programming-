#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    int five=0,zero=0;
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]==5)
            five++;
        else
            zero++;
    }
    if(zero==0)
        cout<<-1;
    else if(zero>0&&five<9)
        cout<<0;

    else
    {
        int n=(five/9)*9;
        for (int i=0;i<n;i++)
            cout<<5;
        for (int i=0;i<zero;i++)
            cout<<0;
    }

    return 0;
}
