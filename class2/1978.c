// https://www.acmicpc.net/problem/1978

#include <stdio.h>

int main(){
    int n = 0;
    int count = 0;
    scanf("%d", &n);
    int inp = 0;
    int isPrime = 1;

    for(int i = 0; i < n ; i++){
        isPrime = 1;
        scanf("%d", &inp);
        if(inp == 1){
            isPrime = 0;
            continue;
        }
        for(int k = 1; k < inp; k++){
            if(inp % k == 0){
                if(k != 1){
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime == 1) count++;
    }
    printf("%d\n", count);
}