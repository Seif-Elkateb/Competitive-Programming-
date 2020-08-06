#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double m1,m2,m3;
    cin>>m1>>m2>>m3;
    double x=sqrt((m1/m3)*m2);
    double y=m1/x;
    double z=m2/x;
    double sum=4*(x+y+z);
    cout<<sum;
    return 0;
}
