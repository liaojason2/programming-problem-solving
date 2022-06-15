#include<stdio.h>
int main()
{
	long long a,b,output,c;
	while(1)
	{
		if(scanf("%lld %lld",&a,&b)!=EOF)
		{
			if(a>b)
			{
				c=a-b;
				printf("%lld\n",c);
			}
			if(b>a)
			{
				c=b-a;
				printf("%lld\n",c);
			}
		}
	}
}
