#include<stdio.h>
#include<string.h>

int main(){
	int al,bl,S1=0,S2=0,a=0,b=0,a2=0,b2=0,y=0,w=0;
	char A[2000],B[2000];
	scanf("%s",A);
	scanf("%s",B);
	al=strlen(A);
	bl=strlen(B);
	for(int i=0;i<al;i++){
		if(A[i]=='W'){
			a++;
			S2+=a2;
		}
		else{
			S1+=a;
			a2++;
			y++;
		}
	}
	for(int i=0;i<bl;i++){
		if(B[i]=='Y'){
			b++;
			S2+=b2;
		}
		else{
			S1+=b;
			b2++;
			w++;
		}
	}
	if(y*w+S1<(al-y)*(bl-w)+S2)
		printf("%d\n",y*w+S1);
	else
		printf("%d\n",(al-y)*(bl-w)+S2);
}

//WY
