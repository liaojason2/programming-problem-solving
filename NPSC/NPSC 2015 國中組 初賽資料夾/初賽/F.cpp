#include<stdio.h>
int main()
{
	long long n,z,a,b;
	scanf("%lld\n",&n);
	for(z=0;z<n;z++)
	{
		scanf("%lld%lld",&a,&b);
		printf("%lld%lld\n",a,b);
		if(a%b==0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}
