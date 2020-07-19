#include <iostream>

using namespace std;

int main()
{
    string x,y;
    cin>>x;
    int n=x.length();
    for (int i=0;i<n;i++)
    {
        if(x[i]=='.')
            y+='0';
        else if(x[i]=='-'&&x[i+1]=='.'){
            y+='1';
            i++;
        }
        else if(x[i]=='-'&&x[i+1]=='-'){
            y+='2';
            i++;
        }
    }
    cout<<y;
    return 0;
}
