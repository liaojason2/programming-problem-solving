#include<stdio.h>
int main(){
    int N,M,a[10000],k = 0;
    scanf("%d",&N);
    for(int i = 0;i < 2 * N;i++){
        for(int j = 0;j < 2 * N;j++){
            //printf("test");
            scanf("%d",&M);
            a[i] = a[i] + M;
        }
    }
    for(int i = 0;i <= 2 * N;i++){
        if(a[k] < a[i+1]){
            k = i + 1;
        }
    }
    printf("%d",a[k]);

}
