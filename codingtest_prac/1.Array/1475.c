#include<stdio.h>

int main(){
    int arr[9] = {0,};
    char inp[8];

    scanf("%s",inp);
    int i =0;
    while(inp[i] !='\0'){
        if(inp[i]-'0' == 9){
            arr[6]++;
        }
        else{
            arr[inp[i]-'0']++;
        }
        i++;
    }
    if(arr[6]%2==0){
        arr[6] = arr[6] / 2;
    }
    else{
        arr[6] = (arr[6] / 2) + 1;
    }
    int max =0;
    for(int j=0;j<9;j++){
        if(max < arr[j]){
            max = arr[j];
        }
    }

    printf("%d\n",max);
}