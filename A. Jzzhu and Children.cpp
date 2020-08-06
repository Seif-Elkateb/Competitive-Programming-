#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x[n];
    int last=0,val=0;
    for (int i=0;i<n;i++){
        cin>>x[i];
        int  t=ceil(double(x[i])/m);
        if(t>=val)
        {
            val=t;
            last=i+1;
        }
    }
    cout<<last;

    return 0;
}
