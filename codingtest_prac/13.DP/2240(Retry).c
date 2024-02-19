#include<stdio.h>

int main(){
    int t[3000];
    char inp[4];
    int time;
    int move;
    fgets(inp,4,stdin);
    time = inp[0] - '0';
    move = inp[2]- '0';

    for(int i =0;i<time;i++){
        scanf("%d",&t[i]);
    }

    int tr[3000]={0,};
    int index =0;

    int backup =1;
    for(int i =0;i<time;i++){
        if(backup != t[i]){
            index++;
        }
        tr[index]++;
        backup = t[i];
    }
    tr[++index] = -1;

    int i =0;
    while(tr[i] != -1){
        printf("%d",tr[i]);
        i++;
    }

    
}