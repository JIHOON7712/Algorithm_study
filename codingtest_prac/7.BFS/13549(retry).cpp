#include<iostream>
#include<deque>

using namespace std;
deque<int> dq;

int main(){
    int arr[100001] = {0,};

    int N,M;
    cin >> N >> M;
    arr[N] = 0;
    dq.push_back(N);

    while(!dq.empty()){
        int now = dq.front();
        dq.pop_front();

        if(M >= now){
            if(now == M) {
                cout << arr[now] <<endl;
                return 0;
            }
            else {
                if(now*2 <= 100000 && arr[now*2] == 0){
                    arr[now*2] = arr[now];
                    dq.push_front(now*2);
                }
                if(arr[now+1] == 0 ){
                    arr[now+1] = arr[now] +1;
                    dq.push_back(now+1);
                }
                if(arr[now-1 ]== 0){
                    arr[now-1] = arr[now] +1;
                    dq.push_back(now-1);
                }
                
            }
        }
        else{
            if(arr[now-1] == 0 || arr[now-1] > arr[now] +1){
                arr[now-1] = arr[now] +1;
                dq.push_back(now-1);
            }
        }
    }
}