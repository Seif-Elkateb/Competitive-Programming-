#include <iostream>

using namespace std;

int main()
{
    long long  n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<" "<<0<<" "<<0;
        return 0;
    }
    if(n==1){
        cout<<1<<" "<<0<<" "<<0;
        return 0;
    }
    else if(n==2)
    {
        cout<<1<<" "<<1<<" "<<0;
        return 0;
    }
    long long  x[1000];
    x[0]=0;
    x[1]=1;
    int i=2;
    while(1){
        x[i]=x[i-1]+x[i-2];
        if(x[i]==n)
            break;
        i++;
    }
    cout<<x[i-1]<<" "<<x[i-3]<<" "<<x[i-4];



    return 0;
}
