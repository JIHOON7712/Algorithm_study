#include<stdio.h>

int main(){
    int M,N,K;
    scanf("%d %d %d",&M,&N,&K);

    int secret[101]={0,};
    int input[101]={0,};
    for(int i =1;i<=M;i++){
        scanf("%d",&secret[i]);
        if(getc(stdin) == '\n') break;
    }

    int check = 1;
    for(int j =1;j<=N;j++){
        scanf("%d",&input[j]);
        if(input[j] == secret[check]){
            if(check == M) {
                printf("%s\n","secret");
                return 0;
            }
            else check++;
        }
        else if(input[j] == secret[1]){
            check = 2;
        }
        else {check = 1;}
        if(getc(stdin) != '\n') continue;
    }

    printf("%s","normal\n");

}