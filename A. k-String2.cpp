#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    string x,y,z;
    cin>>x;
    int n=x.length();
    if(n%k!=0)
    {
        cout<<-1;
        return 0;
    }
    for (int i=0;i<n;i++)
    {
        char temp=x[i];
        int cnt=1;
        for (int j=i;x[j]==x[j+1];j++,i++,cnt++);
        if(cnt%k!=0)
        {
            cout<<-1;
            return 0;
        }
        y.append((cnt/k),temp);

    }
    for (int i=0;i<k;i++)
        cout<<y;

    return 0;
}
