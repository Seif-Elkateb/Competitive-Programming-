#include <iostream>

using namespace std;
int check_prime(int x){
    for (int i=2;i<=x-1;i++)
    {
        if(x%i==0)
            return 0;

    }
    return 1;




}

int main()
{
    int a,b;
    cin>>a>>b;
    if(!check_prime(b))
    {
        cout<<"NO";
        return 0;
    }
    for (int i=a+1;i<b;i++)
    {
        if(check_prime(i))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}
