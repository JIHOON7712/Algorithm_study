#include<stdio.h>

int main(){
    int num[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int cnt=0;

    for(int i=0;i<10;i++){
        scanf("%d",num+i);
        getchar();
        num[i]=num[i]%42;
        cnt++;
        for(int j=0;j<i;j++){
            if(num[j]==num[i]){
                cnt--;
                break;
            }
        }
    }

    printf("%d\n",cnt);

    return 0;
}