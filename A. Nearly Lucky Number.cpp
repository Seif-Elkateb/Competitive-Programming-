#include <iostream>

using namespace std;

int main()
{
    long long x;
    cin>>x;
    int total=0;
    while(x!=0){
        if(x%10==4||x%10==7)
            total++;
        x/=10;
    }
    if(total!=4&&total!=7)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
