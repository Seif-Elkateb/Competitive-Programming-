#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    set <char> uniquie ;
    string x;
    cin>>x;
    int length=x.length();
    for (int i=0;i<length;i++)
    {
        uniquie.insert(x[i]);
    }
    if(uniquie.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
