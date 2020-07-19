#include <iostream>

using namespace std;

int main()
{
    int c[5];
    for (int i=1;i<=4;i++)
        cin>>c[i];
    string m;
    cin>>m;
    int total=0;
    for (int i=0;m[i]!='\0';i++)
    {
        int index=m[i]-'0';
        total+=c[index];

    }
    cout<<total;
    return 0;
}
