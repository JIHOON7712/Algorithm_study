#include<stdio.h>

int main(void){
    int arr[30];

    for(int i=1;i<=30;i++){
        arr[i-1]=i;
    }

    for(int i=0;i<28;i++){
        int inp;
        scanf("%d",&inp);
        
        arr[inp-1]=-1;
    }

    for(int i=0;i<30;i++){
        if(arr[i] != -1){
            printf("%d\n",arr[i]);
        }
    }
}