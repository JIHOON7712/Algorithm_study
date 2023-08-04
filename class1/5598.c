#include<stdio.h>

int main() {
    char inp[1000];

    scanf("%s",inp);
    getchar();

    for(int i=0; inp[i] ; i++){
        if(inp[i] > 'C'){
            inp[i]=inp[i]-3;
        }
        else{
            inp[i]=inp[i]+23;
        }
    }
    printf("%s\n",inp);
}