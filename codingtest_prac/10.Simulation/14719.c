#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    int total=0;
    int flag =0;
    scanf("%d %d",&a,&b);
    int* block = (int*)malloc(sizeof(int)*b);
    
    int height_max = 0;
    for(int i =0 ;i<b;i++){
        scanf("%d",&block[i]);
        if(block[i]>height_max) {height_max = block[i];}
        if (getc(stdin) == '\n') {break;}
    }
    
    int tmp = 0;
    for(int h =1;h<=height_max;h++){
        flag =0;
        for(int j=0;j<b;j++){
            if(block[j]-h>=0){ 
                    if(flag==1){
                        flag=0;
                        total += tmp;
                    }
                    if(flag ==0){
                        tmp=0;
                        flag=1;
                    }
            }
            else{
                tmp++;
            }
        }
    }
    printf("%d\n",total);
}