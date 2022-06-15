#include<stdio.h>  
int honai(int pl,int from,int to,int temp)  
{  
    if(pl==1){  
        printf("Ring %d from %d to %d\n",pl,from,to);  
    }  
    else  
    {  
        honai(pl-1,from,temp,to);  
        printf("Ring %d from %d to %d\n",pl,from,to);  
        honai(pl-1,temp,to,from);  
    }  
}  
int main()  
{  
    int num;  
    scanf("%d",&num);  
    honai(num,1,3,2);  
}   
