#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for (int i=0;i<n;i++)
        cin>>x[i];
    int d=abs(x[n-1]-x[0]);
    int s1=1,s2=n;
    for (int i=1;i<n;i++)
    {
        if(abs(x[i]-x[i-1])<d)
        {
            d=abs(x[i]-x[i-1]);
            s1=i+1;
            s2=i;
        }
    }
    cout<<s1<<" "<<s2;
    return 0;
}
