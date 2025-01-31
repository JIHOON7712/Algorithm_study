#include<stdio.h>

int main(){
    int prime_num[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int inp[101] = {0,};

    int N;
    scanf("%d",&N);

    for(int i =0;i<N;i++){
        scanf("%d",&inp[i+1]);
        if(getc(stdin) == '\n') break;
    }

    int max_count = 0;
    for(int j=0;j<25;j++){
        int count = 0;
        for(int k =1;k<=N;k++){
            if(inp[k] < prime_num[j]) continue;
            else if(inp[k]%prime_num[j] == 0) count++;
        }
        if(max_count < count) max_count = count;
    }

    printf("%d",max_count);
}