#include<stdio.h>
#include<string.h>
int main()
{
	int b,cal[100000],n,z,len,i,sum,ten,hun,s,d,tf;
	char a[100001];
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		scanf("%s%d",a,&b);
		len=strlen(a);
		sum=0;
		tf=0;
		for(i=0;i<len;i++)
		{
			cal[i]=a[i]-'0';
		}
		for(i=0;i<len;i++)
		{
			sum=sum+cal[i];
		}
		ten=10*a[len-2]+a[len-1];
		printf("%d\n",ten); 
		hun=100*a[len-3]+10*a[len-2]+a[len-1];
		printf("%d\n",hun);
		if(b==2)
		{
			if(cal[len-1]%2==0)
			{
				printf("YES\n");
				tf=1;
				
			}
		}
		
		else if(b==3)
		{
			if(sum%3==0)
			{
				printf("YES\n");
				tf=1;
				
			}
		}
		
		else if(b==4)
		{
			if(ten%4==0)
			{
				printf("YES\n");
				tf=1;
			}
		}
		else if(b==5)
		{
			if(cal[len-1]%5==0)
			{
				printf("YES\n");
				tf=1;
			}
			
		}
		else if(b==6)
		{
			if(sum%3==0&&cal[len-1]%2==0)
			{
				printf("YES\n");
				tf=1;
			}
		}
		else if(b==8)
		{
			if(hun%8==0)
			{
				printf("YES\n");
				tf=1;
			}
		}
		else if(b==9)
		{
			
			if(sum/9==0)
			{
				printf("YES\n");
				tf=1;
			}
		}
		else if(b==10)
		{
			
			if(cal[len-1]==0)
			{
				printf("YES\n");
				tf=1;
			}
		}
		else if(b==11)
		{
			s=0;
			d=0;
			for(i=0;i<len;i=i+2)
			{
				
				s=s+cal[i];
			}
			for(i=1;i<len;i=i+2)
			{
				
				d=d+cal[i];
			}
			if((d-s)%11==0)
			{
				printf("YES\n");
				tf=1;
			}
		}
		
		if(tf==0)
		{
			printf("NO\n");
		}
	}
	
} 
