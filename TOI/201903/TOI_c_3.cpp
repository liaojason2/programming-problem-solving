#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int mon,time,prod,sum=0;
	cin>>mon>>time>>prod;
	for(;;)
	{
		if(mon<32)
		{
			cout<<"Wayne can¡¦t eat and drink.";
			break;
		}
		if(prod==0)
		{
			if(mon>=32)
			{
				mon=mon-32;
				if(mon>0)
				{
					cout<<sum<<": Wayne eats an Apple pie, and now he has "<<mon<<" dollars."<<endl;
				}
				else
				{
					cout<<"0: Wayne drinks a Apple pie, and now he doesn¡¦t have money.";
				}
				prod=1;
				sum=sum+time;
			}
			else break;
		}
		if(prod==1)
		{
			if(mon>=55)
			{
				mon=mon-55;
				if(mon>0)
				{
					cout<<sum<<": Wayne drinks a Corn soup, and now he has "<<mon<<" dollars."<<endl;
				}
				else
				{
					cout<<"0: Wayne drinks a Corn soup, and now he doesn¡¦t have money.";
				}
				prod=0;
				sum=sum+time;
			}
			else break;
		}
	}
} 
