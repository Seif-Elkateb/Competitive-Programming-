#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for (int i=0;i<n;i++)
        cin>>x[i];
    int i=0,j=n-1;
    int player[2]={0};
    int temp=0;
    while(i<=j)
    {
    if(x[i]>=x[j])
    {
        player[temp]+=x[i];
        i++;
    }
    else if(x[i]<=x[j])
    {
        player[temp]+=x[j];
        j--;
    }
    temp=!temp;
    }
    cout<<player[0]<<" "<<player[1];

    return 0;
}
