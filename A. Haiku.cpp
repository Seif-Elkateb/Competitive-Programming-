#include <iostream>
#include <string>

using namespace std;

int main()
{
    int syllables[3]={5,7,5};
    string phrase;
    int temp=1;
    for (int i=0;i<3;i++){
        getline(cin,phrase);
        int sum=0,length=phrase.length();
        for (int j=0;j<length;j++)
        {
            if(phrase[j]=='a'||phrase[j]=='e'||phrase[j]=='o'||phrase[j]=='i'||phrase[j]=='u')
                sum++;
        }
        if(sum!=syllables[i]){
            temp=0;
            break;
        }
    }
    if(temp==1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
