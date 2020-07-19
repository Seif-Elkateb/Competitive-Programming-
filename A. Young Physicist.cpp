#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n][3];
    int sum_x=0,sum_y=0,sum_z=0;
    for (int i=0;i<n;i++){
        cin>>x[i][0]>>x[i][1]>>x[i][2];
        sum_x+=x[i][0];
        sum_y+=x[i][1];
        sum_z+=x[i][2];

    }
    if(sum_x!=0||sum_y!=0||sum_z!=0)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
