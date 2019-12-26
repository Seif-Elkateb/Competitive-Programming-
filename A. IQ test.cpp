#include <iostream>

using namespace std;

int main()
{
    int n,even=0,last_even,last_odd;
    cin>>n;
    int x[n];


    for (int i=0; i<n; i++)
    {
        cin>>x[i];
        if(x[i]%2==0)
        {
            even++;
            last_even=i+1;
        }
        else
        {
            even--;
            last_odd=i+1;
        }


    }
    cout<<(even>0?last_odd:last_even);

    return 0;
}
