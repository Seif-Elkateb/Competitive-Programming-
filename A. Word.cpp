#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int c=0;
    int length=x.length();
    for (int i=0;i<length;i++){
        if(isupper(x[i]))
            c++;
        else
            c--;

    }
    if(c>0)
    {
        for (int i=0;i<length;i++)
            x[i]=toupper(x[i]);
    }
    else{
        for (int i=0;i<length;i++)
            x[i]=tolower(x[i]);
    }
    cout<<x;




    return 0;
}
