#include<stdio.h>
int main()
{
	int max,n1,z1,n2,z2,a;
	scanf("%d",&n1);
	for(z1=0;z1<n1;z1++)
	{
		max=0;
		
		scanf("%d",&n2);
		for(z2=0;z2<n2*6;z2++)
		{
			scanf("%d",&a);
			if(a>max)
			{
				max=a;
			}
		}
		printf("%d\n",max);
	}
}
