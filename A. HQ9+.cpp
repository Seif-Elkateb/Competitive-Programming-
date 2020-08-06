#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int n=x.length();
    for (int i=0;i<n;i++)
    {
        if(x[i]=='H'||x[i]=='Q'||x[i]=='9'){

            cout<<"YES";
            return 0;
        }

    }
    cout<<"NO";
    return 0;
}
