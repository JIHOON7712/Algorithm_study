#include<stdio.h>

int main(){
    int score;
    scanf("%d",&score);

    if(score>=90){
        printf("%c\n",'A');
    }
    else if(score>=80){
        printf("%c\n",'B');
    }
    else if(score>=70){
        printf("%c\n",'C');
    }
    else if(score>=60){
        printf("%c\n",'D');
    }
    else{
        printf("%c\n",'F');
    }

    return 0;
}