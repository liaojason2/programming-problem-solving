#include<stdio.h>
int main()
{
	int test,i,j,m,n,output,k;
	char a[501][501];
	scanf("%d",&test);
	for(k=0;k<test;k++)
	{
		output=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			scanf("%s",&a[i]);
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='1')
				{
					if(i+1>=m||a[i+1][j]=='0')
					{
						output=output+1;
					}
					if(i-1<0||a[i-1][j]=='0')
					{
						output=output+1;

					}
					if(j-1<0||a[i][j-1]=='0')
					{
						output=output+1;
					}
					if(j+1>=n||a[i][j+1]=='0')
					{
						output=output+1;
					}
				}
			}
		}
		printf("%d\n",output);
	}
}
