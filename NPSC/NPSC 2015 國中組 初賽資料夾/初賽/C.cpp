#include<stdio.h>
int main()
{
	int i,ina[1024],inb[1024],tempa,tempb,time,cal,output[1024];
	cal=0;
	scanf("%d",&time);
	for(i=0;i<time;i++)
	{
		scanf("%d%d",&ina[i],&inb[i]);		
	}
	tempa=ina[1]-ina[0];
	tempb=inb[1]-inb[0];
	for(i=0;i<time-1;i++)
	{
		if(ina[i+1]-ina[i]!=tempa||inb[i+1]-inb[i]!=tempb)
		{
			cal++;
			tempa=ina[i+1]-ina[i];
			tempb=inb[i+1]-inb[i];
			output[i]=1;
			
		}
		else
		{
			output[i]=0;
		}
	}
	printf("%d\n",cal);
	for(i=0;i<time-1;i++)
	{
		if(output[i]==1)
		{
			printf("%d\n",i+1);
		}
	}
} 
