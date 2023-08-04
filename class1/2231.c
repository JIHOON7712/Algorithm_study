#include<stdio.h>
#include<math.h>

int decompose(int inp){
    int result = 0 ;
    int count = 1;

    result += inp;
    while(inp != 0)
    {
        int k = inp % (int)pow(10,count) / pow(10,(count-1));
        result += k;
        inp = inp - (k * pow(10,(count-1)));
        count++;
    }

    return result;
}

int main(){
    int inp = 0 ;
    scanf("%d",&inp);
    getchar();
    printf("%d\n", decompose(inp));
}