#include <iostream>

using namespace std;

int main()
{
    int  n;
    cin>>n;
    double x[n];
    double  p;
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
        p+=x[i];
    }
    p/=n;
    cout<<p;
    return 0;
}
