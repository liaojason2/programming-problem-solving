#include<stdio.h>
int main()
{
	for(;;)
	{
		int playlife,playatt,playsafe,bosslife,bossatt,bosssafe,playtime,bosstime,output;
		scanf("%d%d%d%d%d%d",&playlife,&playatt,&playsafe,&bosslife,&bossatt,&bosssafe);	
		if(playlife==0&&playatt==0&&playsafe==0&&bosslife==0&&bossatt==0&&bosssafe==0)
		{
			break;
		}
		if(playatt-bosssafe<=0)
		{
			playtime=1;
		}
		else
		{
			playtime=playatt-bosssafe;
		}
		if(bossatt-playsafe<=0)
		{
			bosstime=1;
		}
		else
		{
			bosstime=bossatt-playsafe;
		} 
		if(playlife/bosstime>=bosslife/playtime) 
		/*boss弱,play贏
		因為玩家先攻所以用>=
		*/
		{
			output=bosslife/playtime;
			if(bosslife%playtime!=0)
			{
				output++;
			}
			printf("You win in %d round(s).\n",output);
		}
		if(bosslife/playtime>playlife/bosstime)//boss贏,play弱 
		{
			output=playlife/bosstime;
			if(playlife%bosstime!=0)
			{
				output++;
			}			
			printf("You lose in %d round(s).\n",output);
		}
		
		
	}
	
	
}
