
#include <iostream>
// Return sum of elements in A[0..N-1]
// using recursion.
using namespace std;
int sum_array(int x[], int n)
{
    if (n <= 0)
        return 0;
    return (sum_array(x, n- 1) + x[n - 1]);
}

// Driver code
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int x[n];
        for (int j=0;j<n;j++)
            cin>>x[j];
        cout<<sum_array(x,n)<<endl;





    }
    return 0;
}
