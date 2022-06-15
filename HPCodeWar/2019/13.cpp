#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	int score=0,along=0,count;
    char temp,a[27]={0};
    cin.getline(a,27);
    along=strlen(a);
    for(;;){
    	for(int i=0;i<along-1;i++){
            if(a[i+1]<a[i]){
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                count=0;
                score+=30;
            }
            else{
                score+=10;
                count++;
            }
        }
        if(count>along-1) break;
        for(int i=along-1;i<=0;i--){
            if(a[i+1]<a[i]){
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                score+=30;
                count=0;
            }
            else{
                count++;
                score+=10;
            }            }
        }
        if(count>along-1) break;
    }
}
    
