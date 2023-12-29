#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    int fivekilo = N/5;
    int threekilo;
    int count = 0;
    while(fivekilo >= 0){
        if((N - fivekilo*5) % 3 == 0){
            threekilo = (N - fivekilo*5) / 3;
            count = fivekilo + threekilo;
            break;
        }
        fivekilo--;
    }
    if(fivekilo == -1) count = -1;
    printf("%d\n",count);
}