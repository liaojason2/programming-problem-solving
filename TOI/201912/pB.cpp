#include<iostream>
using namespace std;
int a,b,ans,dataa[100][100]={0},datab[100][100]={0};

int value(int daa,int dab)
{
    int temp=0;
    for(int i=0;i<b;i++) temp+=datab[daa][i];
    for(int i=0;i<a;i++) temp+=datab[i][dab];
    temp-=datab[daa][dab];
    return temp;
}
int main()
{
    cin>>a>>b;
    for(int i=0;i<a;i++){
        for (int j=0; j<b; j++){
            cin>>dataa[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for (int j=0; j<b; j++){
            cin>>datab[i][j];
        }
    }
    int ans;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        {
            ans=value(i,j);
            ///cout<<"ans="<<ans<<"\n";
            if(ans%2==1){
                if(dataa[i][j]==1) cout<<"0 ";
                if(dataa[i][j]==0) cout<<"1 ";
            }
            else if(ans%2==0){
                cout<<dataa[i][j]<<" ";   
            }
        }
        cout<<"\n";
    }  
}