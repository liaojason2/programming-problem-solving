#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int test,g;
	float a,h,w,ans=0;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>g;
		if(g==0)
		{
			cin>>a>>h>>w;
			ans=(9.6*w)+(1.8*h)-(4.7*a)+655;
		}
		if(g==1)
		{
			cin>>a>>h>>w;
			ans=(13.7*w)+(5.0*h)-(6.8*a)+66;
		}
		cout<<fixed<<setprecision(2)<<ans<<endl;
	} 
} 
