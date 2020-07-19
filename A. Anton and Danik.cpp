#include <iostream>

using namespace std;

int main()
{
    int n;
    string x;
    cin>>n>>x;
    int winner=0;
    for (int i=0;i<n;i++){
        if(x[i]=='A')
            winner++;
        else
            winner--;
    }
    if(winner>0)
        cout<<"Anton";
    else if(winner<0)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}
