#include<stdio.h>
int main()
{
	long long a,b,output,c;
	int i;
	for(;;)
	{
		if(scanf("%lld %lld",&a,&b)!=EOF)
		{
			c=b-a;
			if(c<0)
			{
				printf("%lld\n",-c);
			}
			else
			printf("%lld",c);
		}
	}
}
