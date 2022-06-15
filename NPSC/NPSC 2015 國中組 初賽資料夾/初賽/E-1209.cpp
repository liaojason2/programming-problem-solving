#include<stdio.h>
#include<string.h>
int main()
{
	int len,max,i,cal,n,z;
	char input[200001];
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		cal=0;
		max=0;
		scanf("%s",input);
		len=strlen(input);
		for(i=0;i<len;i++)
		{
			input[i+len]=input[i];	
		}
		for(i=0;i<len*2-1;i++)
		{
			if(input[i]!=input[i+1])
			{
				cal++;
				if(cal>max)
				{
					max=cal;
				} 
			}
			else
			{
				cal=1;
			}
			printf("%d\n",cal);
		}
		printf("%d\n",max);
	}
	
} 
