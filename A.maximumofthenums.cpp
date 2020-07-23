#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c;
    for (int i=0;i<t;i++){
            cin>>a>>b>>c;
    cout<<max(a,max(b,c))<<endl;

    }

    return 0;
}
