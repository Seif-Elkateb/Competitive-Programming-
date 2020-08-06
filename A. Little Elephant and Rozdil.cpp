#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    for (int i=0;i<n;i++){
        cin>>x[i];
        y[i]=x[i];
    }
    sort(x,x+n);
    if(x[0]==x[1])
        cout<<"Still Rozdil";
    else {
        for (int i=0;i<n;i++)
            if(y[i]==x[0])
        {
            cout<<i+1;
            break;
        }
    }
    return 0;
}
