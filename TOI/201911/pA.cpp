#include<iostream>
using namespace std;
int main()
{
    int time=0,a=0,b=0,c=0,sign[1001]={0},ck=0;
    for(int i=0;i<2;i++)
    {
        cin>>time;
        //cout<<"test"<<"\n";
        for(int j=0;j<time;j++)
        {
            //cout<<j<<"\n";
            cin>>a;
            if(a>c) c=a;
            cin>>b;
            sign[a]+=b;
        }
        //cout<<"test";

    }
    for(int i=c;i>=0;i--) {

        if(sign[i]==0) continue;
        else{
            ck=1;
            cout<<i<<":"<<sign[i]<<"\n";
        }   
    }
    if(ck==0) cout<<"NULL!"<<"\n";
}
