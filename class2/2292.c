#include<stdio.h>

int main(){
    int layer=0;
    int N;
    scanf("%d",&N);
    
    int M =1;
    while(M<N){
        layer++;
        M = M + 6*(layer);
    }
    printf("%d",layer+1);
}