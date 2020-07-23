#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set <int> y;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    for (int i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
            y.insert(i);
    }
    cout<<y.size();
    return 0;
}
