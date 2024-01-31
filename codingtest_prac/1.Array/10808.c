#include<stdio.h>

int main(){
    char inp[101];
    scanf("%s",inp);

    int check[26] = {0,};
    int i = 0;
    while(inp[i]!='\0'){
        check[inp[i] - 'a']++;
        i++;
    }

    for(int j=0;j<26;j++){
        printf("%d ",check[j]);
    }
}