#include <iostream>
#include <set>
using namespace std;

int main()
{
    int x,year;
    cin>>x;
    set <int> n;
    x++;
    while (true){
            year=x;
                while(year!=0)
            {
                n.insert(year%10);
                year/=10;

            }
            if(n.size()==4)
            {
                cout<<x;
                break;
            }
            n.clear();
            x++;
    }

    return 0;
}
