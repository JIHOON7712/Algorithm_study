#include<stdio.h>

int main(){
    int x,y,w,h;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    getchar();

    if(x<=w/2 && y<=h/2){
        if(x<=y){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",y);
        }
    }
    else if(x<=w/2 || y<=h/2){
        if(x<=w/2){
            if(x<= h-y)
                printf("%d\n",x);
            else
                printf("%d\n",h-y);
        }
        else{
            if(y<= w-x)
                printf("%d\n",y);
            else
                printf("%d\n",w-x);
        }
    }
    else{
        if(w-x< h-y){
            printf("%d\n",w-x);
        }
        else{
            printf("%d\n",h-y);
        }
    }

    return 0;
}