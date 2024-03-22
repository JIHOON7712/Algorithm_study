#include<iostream>
#include<algorithm>

using namespace std;
int N;
int num[1000000];

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i = 0; i < N ; i ++ ){
        cin >> num[i];
    }

    sort(num,num + N,greater<>());
    for(int i = 0;i<N; i++){
        cout << num[i] << '\n';
    }
}