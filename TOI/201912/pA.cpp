#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int b,yn=1;
    string a;
    cin>>a;
    b=a.size();
    for(int i=0;i<b/2;i++)
    {
        if(a[i]!=a[b-1-i])
        {
            yn=0;
            break;
        }
    }
    if(yn==1) {
        cout<<"YES\n";
        for(int i=0;i<b/2;i++)
            cout<<a[i];
    }
    if(yn==0) cout<<"NO";

}