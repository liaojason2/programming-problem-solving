#include<stdio.h>
int main()
{
	int fors,currentys,shops,i;
	scanf("%d",&fors);
	for(i=1;i<=fors;i++)
	{
		scanf("%d%d",&currentys,&shops);
		int bz[currentys];
		for(i=0;i<currentys;i++)
		{
			scanf("%d",bz[i]);
		}
		int prize[shops];
		for(i=0;i<shops;i++)
		
		{
			scanf("%d",prize[shops]);

		}
		int bzb,bzs;
		bzb=0;
		bzs=10000000;
		for(i=0;i<currentys;i++)
		{
			if(bzs>bz[i])
			{
				bzs=bz[i];
			}
			else if(bzb>bz[i])
			{
				bzb=bz[i];
			}
		}
		printf("OK");
		for(;;)
		{
			for(i=0;i<currentys;i++)
			{
				int chg=0;
				if(bz[i+1]>bz[i])
				{
					chg=1;
					int temp;
					temp=bz[i+1];
					bz[i+1]=bz[i];
					bz[i]=temp;
					
				}
				
				else
				{
					break;
				}
			}
			if(chg==0)
			{
				break;
			}
		}
		int i,j,yn;
		for(i=0;i<shops;i++)
		{
			yn=0;
			for(j=0;j<currenty;j++)
			{
				if(price[i]%bz[j]==0)
				{
					printf("Y");
					break;	
				}
				else
				{
					
				}
				
			}
		}
		printf("N");
		printf("\n");
	}
}
