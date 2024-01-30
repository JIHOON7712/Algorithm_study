#include<stdio.h>

int main(){
    int N = 0;
    int K = 0;
    int cnt = 0;
    int check=0;
    scanf("%d %d",&N,&K);
    int inp[N];
    for(int i =0;i<N;i++){
        scanf("%d",&inp[i]);
        if(K >= inp[i]){
            check = i;
        }
    }

    for(int j=check;j>=0;j--){
        if(K == 0){
            break;
        }
        cnt = cnt+K/inp[j];
        K= K-((K/inp[j])*inp[j]);
    }
    printf("%d\n",cnt);
}