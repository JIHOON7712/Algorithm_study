#include<stdio.h>
#include<stdlib.h>

int main(){
    int N =0;
    scanf("%d",&N);

    int* inp = (int*)malloc(sizeof(int)*N);

    for(int i =0;i<N;i++){
        scanf("%d",&inp[i]);
    }

    int check =0;
    scanf("%d",&check);
    int count =0;
    for(int j =0;j<N;j++){
        if(inp[j] == check){
            count++;
        }
    }

    printf("%d\n",count);
}