#include<stdio.h>

int main(){
    int n,k;
    int result=1;

    scanf("%d %d", &n,&k);
    getchar();

    for(int i=n;i>0;i--){
        result = result * i;
    }
    for(int j=k; j>0;j--){
        result = result / j;
    }
    for(int p=n-k; p>0;p--){
        result = result / p;
    }

    printf("%d\n",result);
    return 0;

}