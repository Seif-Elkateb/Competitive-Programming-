#include <iostream>
#include <set>

using namespace std;

int main()
{
    int x[4];
     set <int> color;
    for (int i=0;i<4;i++){
        cin>>x[i];
        color.insert(x[i]);
    }
    cout<<4-color.size();

    return 0;
}
