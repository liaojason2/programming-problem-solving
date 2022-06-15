#include<stdio.h>
int main()
{
	int n,z,i,cal,a,b;
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{	
		cal=0;
		scanf("%d",&a);
		for(i=0;i<8;i++)
		{
			
			cal=cal+a%10;
			a=a/10;
		}
		for(;;)
		{
			if(cal>=10)
			{
				b=cal%10;
				cal=cal/10;
				cal=cal+b;
			}
			else
			{
				break;
			}
		}
		
		
		if(cal==2)
		{
			printf("2, Yes\n");
		}
		else
		{
			printf("%d, No\n",cal);
		}
		
	}
} 
