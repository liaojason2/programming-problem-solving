#include<iostream>
using namespace std;
int main()
{
    int week=0,outtime=0;
    double temp,sum[7]={0},maxweek=0,time[4]={0},maxtime=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            cin>>temp;
            sum[i]+=temp;
            time[j]+=temp;
        }
    }
    for(int i=0;i<4;i++){
        //cout<<time[i]<<"\n";
        if(time[i]>maxtime){
            maxtime=time[i];
            outtime=i;
        }
    }
    for(int i=0;i<7;i++){
        if(sum[i]>maxweek){
            week=i;
            maxweek=sum[i];
        }
    }
    cout<<week+1<<"\n";
    if(outtime==0) cout<<"morning"<<"\n";
    if(outtime==1) cout<<"afternoon"<<"\n";
    if(outtime==2) cout<<"night"<<"\n";
    if(outtime==3) cout<<"early morning"<<"\n";

}