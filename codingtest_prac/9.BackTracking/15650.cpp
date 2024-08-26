#include<iostream>
#define MAX 9
using namespace std;

int n,m;
int arr[MAX] = {0,};
bool visited[MAX] = {0,};

void dfs(int cnt,int t){
    if(cnt == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = t; i <= n;i++){
        if(visited[i] != 1){
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt+1,i+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> n >> m;
    dfs(0,1);
}