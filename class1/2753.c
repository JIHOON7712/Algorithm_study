#include<stdio.h>

int main(){
    int inp;
    scanf("%d",&inp);

    if(inp%4 == 0){
        if(inp % 100 != 0 || inp % 400 == 0){
            printf("%d\n",1);
        }
        else{
            printf("%d\n",0);

        }
    }
    else{
        printf("%d\n",0);
    }

    return 0;
}