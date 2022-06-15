#include<stdio.h>
int main()
{
	int two,tests,i,m,n,ab,a,b;
	scanf("%d",&tests);
	for(i=0;i<tests;i++)
	{
		scanf("%d",&n);
		two=2;
		for(;;)
		{
			if(n>two)
			{
				two=two*2;
			}
			else
			{
				break;
			}
			
			
		}
		ab=two-n;
		a=1;
		if(ab==0)
		{
			ab=1;
		}
		printf("%d %d\n",a,ab);
	}
} 
