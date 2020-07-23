#include <iostream>
using namespace std;

int main()
{

    int t,n;
    string x;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int a[26]={0};
        cin>>n>>x;
        for (int i=0;i<n;i++)
        {
            int index=x[i]-'a';
            a[index]++;
        }
        int m=0;
        for (int i=0;i<26;i++){

            if(a[i]>a[m])
            m=i;
        }
        cout<<char(m+'a');
    }
    return 0;
}
