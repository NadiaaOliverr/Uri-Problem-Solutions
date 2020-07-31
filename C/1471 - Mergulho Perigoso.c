#include<stdio.h>

int main(){

    int N, R, voltou[10000], i;

    while(scanf("%d %d",&N, &R)!= EOF){
        for(i=0; i<10000; i++){
            voltou[i]=0;}

        for(i=1; i<=R; i++){
            scanf("%d",&j);
            voltou[j]++;}

        if(N==R)printf("*\n");
        else{
         for(i=1; i<=N; i++){
             if(voltou[i]==0)printf("%d ",i);
         }
         printf("\n");
        }
    }

    return 0;
}