#include<stdio.h>
int main()
{
	int a,b;
	for(;;)
	{
		scanf("%d%d",&a,&b);
		if(a==0&&b==0)
		{
			break;
		}
		if(a%2==0&&b%2==0)
		{
			printf("Win\n");
		}
		if(a%2!=0&&b%2!=0)
		{
			printf("Win\n");
		}
		else if(a%2!=0&&b%2==0)
		{
			printf("Loss\n");
		}
		else if(a%2==0&&b%2!=0)
		{
			printf("Loss\n");
		}
	}
	
	
}
