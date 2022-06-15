#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num,stu[21]={0};
	{
		cin>>num;
		for(int i=1;i<=num;i++)
		{
			stu[i]=1;
		}
		for(int i=0;i<3;i++)
		{
			int a=0;
			cin>>a;
			stu[a]=0;
		}
		for(int i=21;i>0;i--)
		{
			if(stu[i]==1)
			{
				cout<<"No."<<" "<<i<<endl;
			}
			
		}
	} 
} 
