#include<stdio.h>
int main()
{
	int n,a,b,c,i,z;
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a==b||a==c||b==c)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
} 
