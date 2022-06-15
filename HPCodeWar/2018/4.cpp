#include<stdio.h>
#include<string.h>
int main(){
	
	int n;
	char a[10000]={0};
    scanf("%d",&n);
    for(int i=0;i<10000;i++)
    {
    	scanf("%c",&a[i]);
    	if(a[i]=='\n')
    	{
    		break;
		}
	}
    int ct=1,ct1=1,rec[1000]={0};
    for(int i=0;;i++)
    {
    	for(int j=rec[ct1];j<9999;j++)
		{
		    if(a[j]!=' ')
		    {
	    		ct=ct+1;
	    		rec[ct1]=j+1;
	    		ct1++;
	    		break;
			}
		}
		if(a[rec[i]-1]=='/n')
		{
			break;
		}
	}
    
	printf("%d",rec[1]);
	for(int i=0;i<ct;i++)
	{
		int ct2=0;
		for(int j=rec[i]+1;;j++)
		{
			if(a[j]!=' ')
			{
				ct2++;
			}
			else
			{
				break;
			}
		}
		printf("%d\n",ct2);
	    /*char b[10000];
	    //b[rec[i]]=a[p-3];
	    for(int i=rec[i]+1;i<p-2;i++)
	    {
	    	b[i]=a[i-1];
		}
		for(int i=0;i<10000;i++)
		{
			printf("%c",b[i]);
		}
		
		int k=strlen(b);
		for(int j=0;j<k;j++)
		{
			b[j]=b[j]-1;
		}
		for(int i=0;i<k-2;i++)
		{
			printf("%c",b[i]);
		}*/
	}
    
}

