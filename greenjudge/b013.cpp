#include <iostream>  
#include <string.h>  
#include <algorithm>  
using namespace std;  
int main()  
{  
    char stra[1000],strb[1000],strc[1000],strlonga[4];  
    cin.getline(stra,100);  
    cin.getline(strb,100);  
    cin.getline(strc,100);  
    strlonga[0]=strlen(stra);  
    strlonga[1]=strlen(strb);  
    strlonga[2]=strlen(strc);  
    for(int i=0;i<strlonga[2];i++)  
    {  
        cout<<strc[i];  
    }  
    cout<<endl;  
    for(int i=0;i<strlonga[0];i++)  
    {  
        cout<<stra[i];  
    }  
    cout<<endl;  
    for(int i=0;i<strlonga[1];i++)  
    {  
        cout<<strb[i];  
    }  
    cout<<endl;  
}  