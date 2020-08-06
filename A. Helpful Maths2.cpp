#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int n=x.length();
    int one=0,two=0,three=0;
    for (int i=0;i<n;i++)
    {
        if(x[i]=='1')
            one++;
        if(x[i]=='2')
            two++;
        if(x[i]=='3')
            three++;
    }
    for (int i=1;i<=one;i++)
    {
        if(i!=one||two!=0||three!=0)
            cout<<"1+";
        else
            cout<<"1";
    }
    for (int i=1;i<=two;i++)
    {
        if(i!=two||three!=0)
            cout<<"2+";
        else
            cout<<"2";
    }
    for (int i=1;i<=three;i++)
    {
        if(i!=three)
            cout<<"3+";
        else
            cout<<"3";
    }


    return 0;
}
