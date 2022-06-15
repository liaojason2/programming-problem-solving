#include<iostream>
#include<math.h>
using namespace std;
long long int light[1000000];
int main()
{
	long long int test;
	cin>>test;
	for(long long int i=1;i<=test;i++)
	{
		cin>>light[i];
	}
	long long int final=0;
	for(long long int i=test;i>=1;i=i-1)
	{
		//cout<<i;
		if(light[i]==0)
		{
			/*for(int j=1;j<=test;j++)
			{
				cout<<light[j];
			}*/
			//cout<<endl;	
			//light[i]=1;
			final++;
			//cout<<x;
			for(long long int j=1;j<=sqrt(i);j++)
			{
				//cout<<i<<" "<<j<<i/j<<endl;
				if(i%j==0)
				{
					if(light[j]==0)
					{
						//cout<<"inb";
						light[j]=1;
						if((i/j)!=j)
						{
							if(light[i/j]==1){
								light[i/j]=0;
							}
							else if(light[i/j]==0){
								light[i/j]=1;
							}
							
							
						}
						
					}
					else if(light[j]==1)
					{
						//cout<<"ina";
						light[j]=0;
						if((i/j)!=j)
						{
							
							if(light[i/j]==1){
								//cout<<"aa";
								light[i/j]=0;
								//cout<<light[4];
							}
							else if(light[i/j]==0){
								light[i/j]=1;
							}
						}
					
					}
				}
			}
			//cout<<light[1]<<light[2]<<light[3]<<light[4];	
		}
	}
	cout<<final;
}
 
