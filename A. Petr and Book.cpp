#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[8];
    for (int i=1;i<=7;i++)
        cin>>x[i];
    int i=1;
    while (true){
        n-=x[i];

        if(n<=0)
        {
            cout<<i;
            return 0;
        }
        i++;
        if(i>7)
            i=1;
    }





    return 0;
}
