#include<stdio.h>
#include<string.h>
int main()
{
	int len,max,i,cal,n,z,yn[255],k,j;
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
		for(i=0;i<255;i++)
		{
			yn[i]=0;
		}
		for(k=0;k<len*2;k++)
		{
			for(j=0;j<255;j++)
			{
				yn[j]=0;
			}
			cal=0;
			for(i=k;i<len*2;i++)
			{
				
				if(yn[input[i]]==0)
				{
					cal++;
					yn[input[i]]=1;
					if(cal>max)
					{
						max=cal;
					} 
				}
				else
				{
					break;
					
					
				}
				//printf("%d\n",cal);
			}
		}
		printf("%d\n",max);
	}
	
}
//abababab
