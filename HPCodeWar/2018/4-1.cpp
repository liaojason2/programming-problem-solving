#include<stdio.h>
#include<string.h>
using namespace std;
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
    int ct=1,rec[1000];
    for(int i=1;i<9999;i++)
    {
    	if(a[i]==' ')
    	{
    		ct=ct+1;
		}
	}
	for(int i=0;i<ct;i++)
	{
		int p=strlen(a);
	    char b[10000];
	    b[0]=a[p-3];
	    for(int i=1;i<p-2;i++)
	    {
	    	b[i]=a[i-1];
		}
		int k=strlen(b);
		for(int j=0;j<k;j++)
		{
			b[j]=b[j]-1;
		}
		for(int i=0;i<k;i++)
		{
			printf("%c",b[i]);
		}
	}
    
}

