#include<stdio.h>

int main(void){
    int a=0;
    scanf("%d",&a);
    
    int newint=a;
    int cycle=0;

    while(1){
        int left=newint/10;
        int right=newint%10;
        newint=(right*10)+((left+right)%10);
        cycle++;

        if(a==newint){
            break;
        }
    }
    printf("%d\n",cycle);
    return 0;
}