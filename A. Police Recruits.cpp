#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    int u=0,o=0;
    for (int i=0;i<n;i++){
            cin>>x[i];
            if(x[i]>0)
                o+=x[i];
            else if(x[i]==-1&&o!=0)
                o--;
            else if(x[i]==-1&&o==0)
                u++;

    }
    cout<<u;

    return 0;
}
