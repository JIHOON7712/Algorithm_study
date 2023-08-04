#include<stdio.h>

int main(){
    int inp;

    while(1){
        int div= 10000;
        int num[5];

        scanf("%d",&inp);
        getchar();

        if(inp == 0){
            break;
        }
        for(int i=0; i<5 ; i++){
            num[i]= inp / div;
            inp = inp - num[i]*div;
            div = div / 10;
        }
        for(int j=0; j<5 ; j++){
            if(num[j] != 0){
                for(int k=0; j+k<4-k; k++){
                    if(num[j+k] != num[4-k]){
                        printf("no\n");
                        j=-1;
                        break;
                    }
                }
                if(j != -1) printf("yes\n");
                break;
            }
        }
    }
}