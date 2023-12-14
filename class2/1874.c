#include<stdio.h>

int main(){
    int N;
    int top = -1;
    scanf("%d",&N);
    int data[N];
    int stack[N];
    int inp[N];

    for(int j =0; j<N;j++){
        data[j] = 0;
        stack[j]=0;
    }

    for(int i = 0; i< N;i++){
        scanf("%d",inp[i]);
        while(1){
            if(top ==-1 || stack[top] < inp[i]){
                printf("+\n");
                
            }
        }
    }

    for

    for(int i =1;i<=N;i++){
        data[i] = i;
    }
}