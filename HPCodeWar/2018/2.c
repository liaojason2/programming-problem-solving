#include<stdio.h>
int main(){
    char a[10]={'��','��',"��","�A","��","�B","��","�v","��","��"},b[12]={"�l","��","�G","�x","��","��","��","��","��","��"};
    int year,year1,p,sky,land;
    scanf("%d",&year);
    year1=year-1911;
    p=year1%60;
    sky=p%10-1;
    land=p%12-1;
    printf("%c %c",a[sky],b[land]);

}
