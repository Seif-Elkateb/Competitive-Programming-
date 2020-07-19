#include <iostream>

using namespace std;

int main()
{
 string a,b;
 cin>>a>>b;
 int length=a.length();
 for (int i=0;i<length;i++){
    a[i]=toupper(a[i]);
    b[i]=toupper(b[i]);
 }
 if(a>b)
    cout<<1;
 else if(a<b)
    cout<<-1;
else if(a==b)
    cout<<0;







}
