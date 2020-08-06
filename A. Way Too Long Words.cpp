#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string x[n];
    for (int i=0;i<n;i++)
        cin>>x[i];
    for (int i=0;i<n;i++)
    {
        int s=x[i].length();
        if(s<=10)
            cout<<x[i]<<endl;
        else
        {
            cout<<x[i][0]<<s-2<<x[i][s-1]<<endl;
        }

    }

    return 0;
}
