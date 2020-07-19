#include <iostream>
using namespace std;
int main(){
    int a,b,c,to_solve=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b+c>=2)
            to_solve++;
    }
    cout<<to_solve;











}
