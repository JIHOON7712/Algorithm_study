#include<stdio.h>

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int line[101] = {0,};
    for(int i =0;i<N;i++){
        for(int j=0;j<M;j++){
            int inp;
            scanf("%d",&inp);
            if(inp == 1){
                line[i+1]++;
            }
            if(getc(stdin) == '\n') break;
        }
    }

    int start, end;
    scanf("%d %d",&start,&end);
    for(int k = start;k <=end;k++){
        if(line[k] >0) line[k]--;
    }
    scanf("%d %d",&start,&end);
    for(int k = start;k <=end;k++){
        if(line[k] >0) line[k]--;
    }

    int sum=0;
    for(int a = 1;a<=N;a++){
        sum+=line[a];
    }

    printf("%d",sum);
}