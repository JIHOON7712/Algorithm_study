#include<stdio.h>

int main(){
    int K,P,N;
    scanf("%d %d %d",&K,&P,&N);

    long result = K;
    for(int i = 0;i<N;i++){
        result = (result * P) % 1000000007;
    }

    printf("%ld\n",result);
}