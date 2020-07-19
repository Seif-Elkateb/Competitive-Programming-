#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n,k;
    set <int> c;
    cin>>n>>k;
    int x[n];
    int total=0;
    for (int i=0;i<n;i++){
        cin>>x[i];
        while(x[i]!=0)
        {
            if(x[i]%10<=k)
                c.insert(x[i]%10);
            x[i]/=10;

        }
        if(c.size()==k+1)
            total++;
        c.clear();
    }
    cout<<total;

    return 0;
}
