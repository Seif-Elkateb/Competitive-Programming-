#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    cin>>x[0];
    int maxi=x[0],mini=x[0];
    int r=0;
    for (int i=1;i<n;i++)
    {
        cin>>x[i];
        if(x[i]>maxi)
        {
            r++;
            maxi=x[i];
        }
        if(x[i]<mini)
        {
            r++;
            mini=x[i];
        }
    }
    cout<<r;
    return 0;
}
