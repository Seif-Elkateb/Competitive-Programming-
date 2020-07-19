#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int groups=1;
    int x[n];
    cin>>x[0];
    for (int i=1;i<n;i++)
    {
        cin>>x[i];
        if(x[i]!=x[i-1])
            groups++;
    }
    cout<<groups;

    return 0;
}
