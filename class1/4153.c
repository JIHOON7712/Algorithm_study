#include<stdio.h>

int main(){
    int num[3];
    int sum=0;

    while(1){
        sum=0;
        scanf("%d %d %d",num,num+1,num+2);
        getchar();

        if(num[0] == 0 || num[1] == 0 || num[2] == 0){
            break;
        }
        else{
            int maxidx=0;
            for(int i=1;i<3;i++){
                if(num[i]>num[maxidx])
                    maxidx=i;
            }
            for(int j=0;j<3;j++){
                if(j != maxidx)
                    sum += num[j]*num[j];
            }
            if(num[maxidx]* num[maxidx] != sum)
                printf("wrong\n");
            else {printf("right\n");}
        }
    }
    return 0;
}