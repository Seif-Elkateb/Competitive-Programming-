#include <iostream>

using namespace std;

int main()
{
    int n,h,width=0;
    cin>>n>>h;
    int x[n];
    for (int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]>h)
            width+=2;
        else
            width++;
    }
    cout<<width;




    return 0;
}
