#include<stdio.h>

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int limit[2][101] ={0,};
    int check[2][101] ={0,};
    int max_s = 0;

    for(int i =0;i<N;i++){
        scanf("%d %d",&limit[0][i],&limit[1][i]);
        if(i!=0){
            limit[0][i] += limit[0][i-1];
        }
    }


    for(int j =0;j<M;j++){
        scanf("%d %d",&check[0][j],&check[1][j]);
        if(j!=0){
            check[0][j] += check[0][j-1];
        }
    }

    int a=0;
    int b=0;

    while(1){
        if(a==N || b==M) break;
        if(limit[0][a] < check[0][b]){
            if(limit[1][a] < check[1][b]){
                if(max_s <check[1][b] - limit[1][a] ) {
                    max_s = check[1][b] - limit[1][a];
                }
            }
            a++;
        }
        else if(limit[0][a] == check[0][b]){
            if(limit[1][a] < check[1][b]){
                if(max_s <check[1][b] - limit[1][a] ) {
                    max_s = check[1][b] - limit[1][a];
                }
            }
            a++;
            b++;
        }
        else{
            if(limit[1][a] < check[1][b]){
                if(max_s <check[1][b] - limit[1][a] ){
                    max_s = check[1][b] - limit[1][a];
                }
            }
            b++;
        }
    }
    printf("%d",max_s);
}