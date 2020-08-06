#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int left=0,right=0;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        left+=a;
        right+=b;
    }
    int min_time=min(left,n-left)+min(right,n-right);
    cout<<min_time;
    return 0;
}
