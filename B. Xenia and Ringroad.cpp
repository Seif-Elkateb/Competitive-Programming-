#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long  t=0;
    int a,current=1;
    for (int i=0;i<m;i++){
        cin>>a;
        if(a>=current)
            t+=(a-current);
        else
            t+=(n-current+a);
        current=a;
    }
    cout<<t;

    return 0;
}
