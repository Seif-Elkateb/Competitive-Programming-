#include <iostream>

using namespace std;

int main()
{
  string x;
  cin>>x;
  int n=x.length();
  int one=0,two=0,three=0;
  for (int i=0;i<n;i++)
  {
      if(x[i]=='1')
        one++;
      else if(x[i]=='2')
        two++;
      else if(x[i]=='3')
        three++;
  }
  for (int i=0;i<n;i++)
  {
      if(x[i]!='+'&&one>0){
        x[i]='1';
        one--;
      }
      else if(x[i]!='+'&&two>0)
      {
          x[i]='2';
          two--;
      }
      else if(x[i]!='+'&&three>0)
      {
          x[i]='3';
          three--;
      }


  }
  cout<<x;
    return 0;
}
