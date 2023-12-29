#include<stdio.h>
#include<math.h>
#define M 1234567891

int main(){
    int N;
    int R =1;
    scanf("%d",&N);
    getchar();
    char inp[N+1];
    fgets(inp,N+1,stdin);

    long long int sum=0;
    for(int i =0;i<N;i++){
        long long res = (long long int)R*(long long int)(inp[i]-'a' + 1);
        R = R*31;
        sum += res;
    }
    printf("%lld\n",sum);
}