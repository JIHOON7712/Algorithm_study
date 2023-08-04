#include<stdio.h>

int main(){
    int cnt,maxn;
    scanf("%d %d",&cnt,&maxn);
    getchar();

    int arr[cnt];
    for(int i=0;i<cnt;i++){
        scanf("%d",arr+i);
        getchar();
    }

    for(int j=0;j<cnt;j++){
        if(arr[j]<maxn){
            printf("%d ",arr[j]);
        }
    }
    printf("\n");

    return 0;
}