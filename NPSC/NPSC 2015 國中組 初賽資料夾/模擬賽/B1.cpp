#include<stdio.h>
int main()
{
	long long a,b,output,c;
	int i;
	for(;;)
	{
		if(scanf("%lld %lld",&a,&b)!=EOF)
		{
			if(a>b)
			{
				c=a-b;
				printf("%lld\n",c);
			}
			else
			{
				c=b-a;
				printf("%lld\n",c);
			}
		}
	}
}
