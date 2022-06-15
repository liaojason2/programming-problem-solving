#include<stdio.h>
int main()
{
	int a[5],p,b,c,i,temp;
	scanf("%d",&p);
	for(i=0;i<5;i++)
	{
		a[i]=0;
	}
	a[p]=1;
	scanf("%d%d",&b,&c);
	temp=a[b];
	a[b]=a[c];
	a[c]=temp;
	for(i=0;i<5;i++)
	{
		if(a[i]==1)
		{
			printf("%d\n",i);
		}
	}
	
}
