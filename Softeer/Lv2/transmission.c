#include<stdio.h>

int main(){
    int trans[8];
    scanf("%d %d %d %d %d %d %d %d",&trans[0],&trans[1],&trans[2],&trans[3],&trans[4],&trans[5],&trans[6],&trans[7]);
    int flag = -1;
    for(int i =0;i<8;i++){
        if(i==0){
            if(trans[0] == 1) flag = 1;
            else if(trans[0] == 8) flag = 2;
            else {
                printf("%s","mixed");
                flag = -1;
                break;
            }
        }
        else{
            if(flag == 1){
                if(trans[i] -1 != trans[i-1]) {
                    flag = -1;
                    printf("%s","mixed");
                    break;
                }
            }
            else if(flag == 2){
                if(trans[i] +1 != trans[i-1]) {
                    printf("%s","mixed");
                    flag = -1;
                    break;
                }
            }
        }
    }
    if(flag == 1) printf("ascending");
    else if(flag ==2) printf("descending");

    return 0;
}