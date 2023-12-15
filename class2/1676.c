#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int count_zero(int n){
    int mul2 = 0;
    int mul5 = 0;
    int i =2;
    while(i<=n){
        int x = i;
        while(x % 2 == 0){
            x = x/2;
            mul2++;
        }
        while(x%5==0){
            x = x/5;
            mul5++;
        }
        i++;
    }

    int result = mul2 > mul5 ? mul5 : mul2;
    return result;
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",count_zero(n));
}