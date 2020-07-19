#include <iostream>

using namespace std;

int main()
{
    int x[3][3];
    int n;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
            x[i][j]=1;
    }
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>n;
            x[i][j]+=n;
            if(i>0)
                x[i-1][j]+=n;
            if(i<2)
                x[i+1][j]+=n;
            if(j>0)
                x[i][j-1]+=n;
            if(j<2)
                x[i][j+1]+=n;
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(x[i][j]%2==0)
                cout<<0;
            else
                cout<<1;
        }
        cout<<endl;
    }

    return 0;
}
