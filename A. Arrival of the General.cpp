#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    int mini=0,maxi=0;
    for (int i=0;i<n;i++){
        cin>>x[i];
    if(i!=0&&x[i]>x[maxi])
        maxi=i;
    if(i!=0&&x[i]<=x[mini])
        mini=i;

    }
    if(maxi<mini)
        cout<<maxi+(n-1-mini);
    else
        cout<<maxi+(n-1-mini)-1;
    return 0;
}
