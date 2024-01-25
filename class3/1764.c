#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a, const void *b){
    return strcmp(*(char **)a, *(char **)b);
}

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    char* arr_N[N];
    for(int i = 0; i <N;i++){
        arr_N[i] = (char*)malloc(sizeof(char)*21);
        scanf("%s",arr_N[i]);
    }
    qsort(arr_N,N,sizeof(char*),compare);

    char* arr_M[M];
    for(int j = 0; j <M;j++){
        arr_M[j] = (char*)malloc(sizeof(char)*21);
        scanf("%s",arr_M[j]);
    }
    qsort(arr_M,M,sizeof(char*),compare);

    int p=0;
    int q=0;
    int count = 0;
    int res_len = 0;
    if(N <= M){ res_len = N;}
    else{ res_len = M;}
    char* res[res_len];
    while(p<N && q<M){
        int result = strcmp(arr_N[p],arr_M[q]);
        if(result < 0){
            p++;
        }
        else if(result > 0){
            q++;
        }
        else{
            res[count] = (char*)malloc(sizeof(char)*21);
            strcpy(res[count],arr_N[p]);
            count++;
            p++;q++;
        }
    }

    printf("%d\n",count);
    for(int k =0;k<count;k++){ printf("%s\n",res[k]);} 
    for (int i = 0; i < N; i++) {
        free(arr_N[i]);
    }
    for (int i = 0; i < M; i++) {
        free(arr_M[i]);
    }
    for (int i = 0; i < count; i++) {
        free(res[i]);
    }
}