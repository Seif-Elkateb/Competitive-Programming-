#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    if(x.find("H")==-1&&x.find("Q")==-1&&x.find("9")==-1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;

}
