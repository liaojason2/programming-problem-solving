#include<stdio.h>
int main()
{
	int a,i,n,z;
	char ende[8],code[130],input[1000],temp;
	scanf("%s",&ende);
	for(i='a';i<='z'+1;i++)
	{
		scanf("%c",&code[i]);
	}
	
	if(ende[0]=='e')
	{
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			scanf("%c",&input[i]);
			printf("%c",input[i]);
		}
		for(i=0;i<=n;i++)
		{
			printf("%c\n",input[i]);
			printf("%c",code['a']);
		}
		
		
			
	}
	//if(ende[0]='d')
} 
