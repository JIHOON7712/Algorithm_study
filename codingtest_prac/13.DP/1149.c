#include<stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define R 0
#define G 1
#define B 2

int main(){
    int N;
    scanf("%d",&N);
    int d[1001][3];
    for(int i = 1 ; i<=N ; i++){
        scanf("%d %d %d",&d[i][0],&d[i][1],&d[i][2]);
    }

    for(int j = 2; j<=N;j++){
        d[j][R] = MIN(d[j-1][G],d[j-1][B]) + d[j][R];
        d[j][G] = MIN(d[j-1][R],d[j-1][B]) + d[j][G];
        d[j][B] = MIN(d[j-1][R],d[j-1][G]) + d[j][B];
    }

    printf("%d\n",MIN(MIN(d[N][R],d[N][G]),d[N][B]));
}