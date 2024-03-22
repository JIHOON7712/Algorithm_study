#include<iostream>

using namespace std;

#define MOD 10007

int main(){
    int N; 
    cin >> N;
    int tile[1001] = {0,};

    tile[1] = 1;
    tile[2] = 2;

    if(N>=3){
        for(int i = 3; i <= N; i++){
            tile[i] = (tile[i-1] + tile [i-2] ) % MOD;
        }
    }
    cout << tile[N] << endl;
}