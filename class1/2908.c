#include<stdio.h>

int reverse(int ori){
    int h,t,o;
    h=ori/100;
    ori=ori%100;
    t=ori/10;
    o=ori%10;

    return o*100 + t*10 + h;
}

int main(){
    int fir,sec;
    scanf("%d %d",&fir,&sec);
    getchar();

    fir=reverse(fir);
    sec=reverse(sec);

    if(fir > sec){
        printf("%d\n",fir);
    }
    else{
        printf("%d\n",sec);
    }
}