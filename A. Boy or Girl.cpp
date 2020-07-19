#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    string x;
    cin>>x;
    string a="abcdefghijklmnopqrstuvwxyz";
    int distinct=0,length=x.length();
    for (int i=0;i<length;i++)
    {
        int index=a.find(x[i]);
        if(index!=-1)
        {
            distinct++;
            a[index]='-';
        }

    }
    if(distinct%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
