#include<stdio.h>
int main()
{
	int n,z,i,a[51],output;
	for(;;)
	{
		output=0;
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])//?W?? 
			{
				output=output+20*(a[i+1]-a[i]);
			}
			else
			{
				output=output+10*(a[i]-a[i+1]);
			}
		}
		printf("%d\n",output);
	}
} 
