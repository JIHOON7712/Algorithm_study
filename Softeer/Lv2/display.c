#include<stdio.h>
#include<string.h>

int main(){
    int num[10][7] = {
        {1,1,1,1,1,1,0},
        {0,1,1,0,0,0,0},
        {1,1,0,1,1,0,1},
        {1,1,1,1,0,0,1},
        {0,1,1,0,0,1,1},
        {1,0,1,1,0,1,1},
        {1,0,1,1,1,1,1},
        {1,1,1,0,0,1,0},
        {1,1,1,1,1,1,1},
        {1,1,1,1,0,1,1}
    };

    int times = 0;
    scanf("%d",&times);

    for(int i = 0;i<times;i++){
        int prev[5][7] = {0,};
        int next[5][7] = {0,};

        int numprev;
        int numnext;
        int count =0;
        scanf("%d %d",&numprev,&numnext);

        int flag = 0;
        if(numprev>9999) {flag = 0;}
        else if(numprev>999){flag = 1;}
        else if(numprev>99){flag=2;}
        else if(numprev>9){flag=3;}
        else {flag=4;}

        if(flag<=0){
        memcpy(prev[0],num[numprev / 10000],7*sizeof(int));
        numprev = numprev%10000;
        }
        if(flag<=1){
        memcpy(prev[1],num[numprev / 1000],7*sizeof(int));
        numprev = numprev%1000;
        }
        if(flag<=2){
        memcpy(prev[2],num[numprev / 100],7*sizeof(int));
        numprev = numprev%100;
        }
        if(flag<=3){
        memcpy(prev[3],num[numprev / 10],7*sizeof(int));
        numprev = numprev%10;
        }
        memcpy(prev[4],num[numprev],7*sizeof(int));

        flag = 0;
        if(numnext>9999) {flag = 0;}
        else if(numnext>999){flag = 1;}
        else if(numnext>99){flag=2;}
        else if(numnext>9){flag=3;}
        else {flag=4;}

        if(flag<=0){
            memcpy(next[0],num[numnext / 10000],7*sizeof(int));
            numnext = numnext%10000;
        }
        if(flag<=1){
            memcpy(next[1],num[numnext / 1000],7*sizeof(int));
            numnext = numnext%1000;
        }
        if(flag<=2){
            memcpy(next[2],num[numnext / 100],7*sizeof(int));
            numnext = numnext%100; 
        }
        if(flag<=3){   
            memcpy(next[3],num[numnext / 10],7*sizeof(int));
            numnext = numnext%10;
        }   
        memcpy(next[4],num[numnext],7*sizeof(int));

        for(int j=0;j<5;j++){
            for(int k =0;k<7;k++){
                if (prev[j][k] != next[j][k]) count++;
            }
        }
        printf("%d\n",count);
    }
}