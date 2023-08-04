#include<stdio.h>

int power(int times){
    int a=1;
    for(int i=0;i<times;i++){
        a=a*10;
    }
    return a;
}


int main() {
    int result=1;
    int inp[3];
    
    int arr[10]={0,};
    int flag=0;
    
    for(int i=0; i<3; i++){
        scanf("%d",inp+i);
        getchar();
    }

    result=inp[0]*inp[1]*inp[2];
    int p=result;

    for(int j=9;j>=0;j--){
        if(p!= result && flag == 0){
            arr[0]=0;
            flag=1;
        }
        arr[p/power(j)]++;
        p=result%(power(j));
    }

    for(int k=0;k<10;k++){
        printf("%d\n",arr[k]);
    }
}