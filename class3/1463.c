#include<stdio.h>
#include<stdlib.h>

int main(){
    int N =0;
    scanf("%d",&N); // Target

    int flag = 1;
    int count = 0;  
    int N_arr_len = 1;
    int* N_arr = (int*)malloc(sizeof(int)*N_arr_len);
    N_arr[0] = 1;

    int arr_len=0;
    int* arr=NULL;

    if(N==1) {
        printf("0");
        flag = 0;
        return 0;
    }
    while(flag){
        arr_len=N_arr_len;
        arr=N_arr;
        count++;

        N_arr_len = arr_len*3;
        N_arr = (int*)malloc(sizeof(int)*N_arr_len);
        for(int j = 0;j<arr_len;j++){
            if(arr[j]*3 == N || arr[j]*2 == N || arr[j]+1 == N){
                printf("%d\n",count);
                flag = 0;
                break;
            } else{
                N_arr[j*3] = arr[j]*3;
                N_arr[j*3+1] = arr[j]*2;
                N_arr[j*3+2] = arr[j]+1;
            }
        }
        free(arr);
    }
    free(N_arr);
}