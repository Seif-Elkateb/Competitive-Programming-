#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int n=x.length();
    string dub="WUB";
    int index=x.find(dub);
    while(index!=-1){
        if(index==0)
            x.erase(0,3);
        else if(index!=0&&x[index-1]!=' '){
            x.erase(index,3);
            x.insert(index," ");


        }
        else if(index!=0&&x[index-1]==' ')
            x.erase(index,3);

        index=x.find(dub);

    }
    cout<<x;








    return 0;
}
