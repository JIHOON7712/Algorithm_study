#include<stdio.h>

int main(){
    int time=0;
    scanf("%d",&time);
    while(getchar()!='\n');
    int arr[41][2] ={{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},
                    {-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},
                    {-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},
                    {-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}};

    arr[0][0] = 1;
    arr[0][1] = 0;
    arr[1][1] = 1;
    arr[1][0] = 0;
    int last = 2;

    for(int i =0;i<time;i++){
        int N=0;
        scanf("%d",&N);
        while(getchar()!='\n');
        if(arr[N][0] == -1 || arr[N][1] == -1){
            for(;last<=N;last++){
                arr[last][0] = arr[last-1][0] + arr[last -2][0];
                arr[last][1] = arr[last-1][1] + arr[last -2][1];
            }
            printf("%d %d\n",arr[N][0],arr[N][1]);
        }
        else{
            printf("%d %d\n",arr[N][0],arr[N][1]);
        }
    }
}