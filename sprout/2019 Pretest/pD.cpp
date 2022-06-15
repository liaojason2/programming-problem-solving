#include<cstdio>
using namespace std;
char inp[100];
char a[1000];
int main()
{
	int fu,k,aa;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		for(int i=0;;i++)
		{
			scanf("%c",&a[i]);
			if(a[i]=='\n')
			{
				break;
			}
		}
		for(int i=0;;i++)
		{
			scanf("%c",&a[i]);
			if(a[i]=='\n')
			{
				break;
			}
		}
		int w[10]={0},t[10]={0},b[10]={0},ee=0,ss=0,ww=0,nn=0,rc=0,gf=0,wb=0,sum=0;
		for(int i=0;i<51;i=i+3){
			if(inp[i]=='W'&&inp[i+1]=='B'){
				wb++;
			}
			else if(inp[i]=='W'&&inp[i+1]=='W'){
				ww++;
			}
			else if(inp[i+1]=='W'){
				w[(inp[i]-'0')]++;
			}
			if(inp[i+1]=='T'){
				t[(inp[i]-'0')]++;
			}
			if(inp[i+1]=='B'){
				b[(inp[i]-'0')]++;
			}
			else if(inp[i]=='E'&&inp[i+1]=='E'){
				ee++;
			}
			else if(inp[i]>='S'&&inp[i+1]=='S'){
				ss++;
			}
			else if(inp[i]=='N'&&inp[i+1]=='N'){
				nn++;
			}
			else if(inp[i]=='R'&&inp[i+1]=='C'){
				rc++;
			}
			else if(inp[i]=='G'&&inp[i+1]=='F'){
				gf++;
			}
			}
		//cout<<wb<<gf<<rc<<nn<<ww<<ee<<ss;
		for(int i=1;i<=6;i++){
			if(w[i]>0&&w[i+1]>0&&w[i+1]>0&&w[i+2]>0){
				w[i]--;
				w[i+1]--;
				w[i+2]--;
			}
			if(t[i]>0&t[i+1]>0&&t[i+1]>0&&t[i+2]>0){
				t[i]--;
				t[i+1]--;
				t[i+2]--;
			}
			if(b[i]>0&&b[i+1]>0&&b[i+1]>0&&b[i+2]>0){
				b[i]--;
				b[i+1]--;
				b[i+2]--;
			}
		}
		for(int i=1;i<=10;i++)//¡MI
		{
			if(w[i]==3)
			{
				w[i]=w[i]-3;
			}
			if(t[i]==3)
			{
				t[i]=t[i]-3;
			}
			if(b[i]==3)
			{
				b[i]=b[i]-3;
			}
	
		}
		if(wb==3)
		{
			wb-=3;
		}
		if(ww==3)
		{
			ww-=3;
		}
		if(ee==3)
		{
			ee-=3;
		}
		if(ss==3)
		{
			ss-=3;
		}
		if(nn==3)
		{
			nn-=3;
		}
		if(rc==3)
		{
			rc-=3;
		}
		if(gf==3)
		{
			gf-=3;
		}
		/*for(int i=1;i<9;i++)
		{
			cout<<w[i];
		}
		cout<<endl;*/
		/*for(int i=49;i>=//oth*3-1;i=i-3)
		{
			if(inp[i]-'0')
		}*/
		//testfinal
		for(int i=0;i<=9;i++)
		{
			if(w[i]==1&&w[i+1]==1)
			{
				sum++;
				w[i]=0;
				w[i+1]=0;
			}
			if(t[i]==1&&t[i+1]==1)
			{
				sum++;
				t[i]=0;
				t[i+1]=0;
			}
			if(b[i]==1&&b[i+1]==1)
			{
				sum++;
				b[i]=0;
				b[i+1]=0;
			}
		}
		if(wb==2)
		{
			sum++;
		}
		if(ww==2)
		{
			sum++;
		}
		if(ee==2)
		{
			sum++;
		}
		if(ss==2)
		{
			ss++;
		}
		if(nn==2)
		{
			sum++;
		}
		if(rc==2)
		{
			sum++;
		}
		if(gf==2)
		{
			sum++;
		}
		for(int i=0;i<=10;i++)
		{
			if(w[i]==2)
			{
				sum++;
				w[i]=0;
			}
			if(t[i]==2)
			{
				sum++;
				t[i]=0;
			}
			if(b[i]==2)
			{
				sum++;
				w[i]=0;
			}
		}
		if(sum==2){
			for(int i=0;i<1;i++)
			{
				printf("%s",a);
			}
		}
		else{
			printf("lose");
		}
	}
		

}
