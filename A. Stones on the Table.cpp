#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string x;
    cin>>x;
    int removed=0;
    for (int i=0;i<n;i++){
        if(x[i]>0&&x[i]==x[i-1])
            removed++;

    }
    cout<<removed;
    return 0;
}
