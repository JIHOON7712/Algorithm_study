#include<stdio.h>

int main(){
    int sum=0;
    int num[5];
    scanf("%d %d %d %d %d",num,num+1,num+2,num+3,num+4);

    for(int i=0; i<5; i++){
        sum=sum+(num[i]*num[i]);
    }

    printf("%d\n",sum%10);
}