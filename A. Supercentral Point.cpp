#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    for (int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    int p=0;
    for (int i=0;i<n;i++)
    {
        int left=0,right=0,upper=0,lower=0;
        for (int j=0;j<n;j++)
        {
            if(j!=i&&x[j]>x[i]&&y[j]==y[i])
                right=1;
            if(j!=i&&x[j]<x[i]&&y[j]==y[i])
                left=1;
            if(j!=i&&x[j]==x[i]&&y[j]>y[i])
                upper=1;
            if(j!=i&&x[j]==x[i]&&y[j]<y[i])
                lower=1;
        }
        if(upper&&lower&&left&&right)
            p++;




    }
    cout<<p;


    return 0;
}
