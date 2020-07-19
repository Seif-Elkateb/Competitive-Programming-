#include <iostream>

using namespace std;

int main()
{
    int n,t;
    string x;
    cin>>n>>t>>x;
    for (int i=0;i<t;i++){
        int temp=0;
        for (int j=0;j<n-1;j++)
        {

            if(x[j]=='B'&&x[j+1]=='G'&&!temp){
                temp=1;
                x[j]='G';
                x[j+1]='B';
            }
            else
                temp=0;
        }

    }
    cout<<x;
    return 0;
}
