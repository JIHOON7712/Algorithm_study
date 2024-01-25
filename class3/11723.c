#include<stdio.h>
#include<string.h>

int main(){
    int N=0;
    int S[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    scanf("%d",&N);

    while(N){
        char inp[10];
        int x=0;
        scanf("%s",inp);

        if(!strcmp(inp,"add")){
            scanf("%d",&x);
            if(S[x]!=1) S[x]=1;
        }
        else if(!strcmp(inp,"remove")){
            scanf("%d",&x);
            if(S[x]!=0) S[x]=0;
        }
        else if(!strcmp(inp,"check")){
            scanf("%d",&x);
            printf("%d\n",S[x]);
        }
        else if(!strcmp(inp,"toggle")){
            scanf("%d",&x);
            if(S[x]==1){
                S[x]=0;
            }
            else if(S[x] ==0){
                S[x]=1;
            }
        }
        else if(!strcmp(inp,"all")){
            for(int i =1;i<21;i++){
                S[i]=1;
            }
        }
        else if(!strcmp(inp,"empty")){
            for(int i =1;i<21;i++){
                S[i]=0;
            }
        }
        N--;
    }
}