#include<stdio.h>
#include<string.h>
int main()
{
	int n,z,len,i,output,max;
	char a[100000];
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		max=0;
		output=0;
		scanf("%s",a);
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			a[i+len]=a[i];
		}
		for(i=0;i<len*2;i++)
		{
			if(a[i]!=a[i+1])
			{
				output+1;
			}
			if(output>=max)
			{
				max=output;
			}
			if(a[i]==a[i+1])
			{
				output=0;
			}
			
		}
		printf("%d",max);
		
	}
}
