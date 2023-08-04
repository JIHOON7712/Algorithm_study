#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    char str[1010];
    
    char stack[21];
    int top=-1;

    char result[test][1010];

    for(int t=0;t<test;t++){
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1]='\0';

        for( int i=0 ;i<=strlen(str); i++){
            if(str[i] == ' ' || i == strlen(str)){
                while(top != -1){
                    str[i-(top+1)]=stack[top];
                    top--;
                }
                continue;
            }
            ++top;
            stack[top]=str[i];
        }
        strcpy(result[t],str);
    }

    for(int k=0;k<test;k++){
        printf("%s\n",result[k]);
    }
    return 0;
}