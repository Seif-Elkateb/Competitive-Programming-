#include <iostream>

using namespace std;

int main()
{
    int n;
    int a,b;
    cin>>n;
    int total=0,m=0;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        if(i!=0)
            total-=a;
        total+=b;
        if(total>m)
            m=total;

    }
    cout<<m;

    return 0;
}
