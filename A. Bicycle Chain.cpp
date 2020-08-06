#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n;
   int x[n];
   for (int i=0;i<n;i++)
    cin>>x[i];
   cin>>m;
   int y[m];
   for (int i=0;i<m;i++)
    cin>>y[i];
   int c=0,cnt=0;

   for (int i=0;i<m;i++)
   {
       for (int j=0;j<n;j++)
       {
           if(y[i]%x[j]==0&&y[i]/x[j]>c){
            c=y[i]/x[j];
            cnt=0;
           }
           if(y[i]%x[j]==0&&y[i]/x[j]==c)
            cnt++;
       }
   }



   cout<<cnt;


        return 0;
}
