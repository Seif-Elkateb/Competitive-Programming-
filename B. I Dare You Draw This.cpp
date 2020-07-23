#include <iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;
     int x;
     for(int i=0;i<t;i++)
     {
         cin>>x;
         for(int j=0;j<x/2;j++){
            for (int k=0;k<=j;k++)
                cout<<"*";
            for (int k=j+1;k<x-j-1;k++)
                cout<<" ";
            for (int k=x-j-1;k<x;k++)
                cout<<"*";
            cout<<endl;
         }
            for (int j=0;j<x;j++)
            cout<<"*";
            cout<<endl;
            for(int j=(x/2)-1;j>=0;j--){
            for (int k=0;k<=j;k++)
                cout<<"*";
            for (int k=j+1;k<x-j-1;k++)
                cout<<" ";
            for (int k=x-j-1;k<x;k++)
                cout<<"*";
            cout<<endl;
         }



     }
    return 0;
}
