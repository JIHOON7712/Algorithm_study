#include<iostream>
#include<queue>

using namespace std;

#define MAX 1001

int box[MAX][MAX];
int N,M;

queue<pair<int,int>> q;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int max_time = 0;

int main(){
    cin >> M >> N;
    for(int i = 0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> box[i][j];

            if(box[i][j] == 1) {
                q.push(pair<int,int>({i,j}));
            }
        }
    }

    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();

        for(int k = 0;k<4;k++){
            int nx = cur.first + dx[k];
            int ny = cur.second + dy[k];

            if(nx<0 || ny<0 || nx>=N || ny>=M){ continue;}
            if(box[nx][ny] == 0){
                box[nx][ny] = box[cur.first][cur.second] + 1;
                q.push(pair<int,int>({nx,ny}));
            }
        }
    }

    int flag = 0;
    for(int i = 0;i<N;i++){
        for(int j=0;j<M;j++){
            if(box[i][j] == 0) {
                cout << -1<<endl;
                flag = 1;
                return 0;
            }
            if(box[i][j] > max_time) max_time = box[i][j];
        }
    }

    if(flag == 0){cout << max_time-1 <<endl;}
}