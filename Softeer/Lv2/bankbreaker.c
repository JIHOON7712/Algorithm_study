#include<stdio.h>

int main(){
    int N[1000001] = {0,};
    int count;
    int max_value=0;

    int W;
    int value=0;

    scanf("%d %d",&W,&count);

    for(int i = 0;i<count;i++){
        int mass;
        int new_value;
        scanf("%d %d",&mass,&new_value);

        if(new_value > max_value) max_value = new_value;
        N[new_value] += mass;
    }

    while(W >0){
        if(N[max_value] != 0){
            if(N[max_value] <= W){
                value += max_value * N[max_value];
                W = W - N[max_value];
            }
            else if(N[max_value] > W){
                value += W * max_value;
                W = 0;
            }
        }
        max_value--;
    }

    printf("%d\n",value);
}