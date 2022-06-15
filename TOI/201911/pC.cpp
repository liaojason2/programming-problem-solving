#include<iostream>
using namespace std;
int main(){
    int data=0,temp=0,h=0,t=0,addtime=0,timeh[21]={0},timet[21]={0};
    cin>>data;
    cin>>h>>t;
    timeh[0]=h;
    timet[0]=t;
    for(int i=1;i<=data;i++){
        cin>>temp;
        t+=temp;
        for(;;){
            if(t<60) break;
            t=t-60;
            h=h+1;
        }
        if(h>=24) h-=24;
        timeh[i]=h;
        timet[i]=t;
        //out<<timeh[i]<<":"<<timet[i]<<"\n";
    }
    for(;;){
        cin>>temp;
        if(temp==0) break;
        if(timeh[temp]<10) cout<<0<<timeh[temp];
        else cout<<timeh[temp];
        cout<<":";
        if(timet[temp]<10) cout<<0<<timet[temp];
        else cout<<timet[temp];
        cout<<"\n";
    }
}