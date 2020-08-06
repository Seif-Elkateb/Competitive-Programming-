#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int n;
    cin>>n;
    string y;
    for (int i=0;i<n;i++)
    {
        cin>>y;
        if(y[0]=='+'||y[2]=='+')
            x++;
        if(y[0]=='-'||y[2]=='-')
            x--;
    }
    cout<<x;
    return 0;
}
