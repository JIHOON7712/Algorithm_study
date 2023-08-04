#include<stdio.h>

int main(){
    int hour,min=0;
    scanf("%d %d",&hour,&min);
    getchar();

    if(min >= 45){
        min=min-45;
    }
    else if(hour>0){
        min=min+15;
        hour--;
    }
    else{
        hour=23;
        min=min+15;
    }

    printf("%d %d\n",hour,min);
    return 0;
}