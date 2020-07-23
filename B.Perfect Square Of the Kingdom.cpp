#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        int x[n][n];
        int sum=0;
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                cin>>x[i][j];
                if(sqrt(x[i][j])-floor(sqrt(x[i][j]))==0)
                    sum+=x[i][j];
            }
        }
        cout<<sum<<endl;


    }
    return 0;
}
