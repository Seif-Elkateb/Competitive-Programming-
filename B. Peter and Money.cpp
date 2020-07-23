#include <iostream>

using namespace std;

int main()
{

        int n,difference=INT_MAX,m,b1,b2;
        cin>>n;
        int x[n];
        for (int i=0;i<n;i++)
            cin>>x[i];
        cin>>m;

        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if(x[i]+x[j]==m&&i!=j&&abs(i-j)<difference)
                {
                    b1=i+1;
                    b2=j+1;
                }
            }
        }
        cout<<b1<<" "<<b2;


    return 0;
}
