#include<iostream>
#include<queue>
#include<string>

using namespace std;

#define x first
#define y second
#define MAX 101

int path [MAX][MAX];
string board[MAX];

int N,M;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


queue<pair<int,int>> Q;

int main(void){
    cin >> N >> M;
    
    fill(path[0],path[MAX],-1);

    for(int i=0;i<N;i++){
        cin >> board[i];
    }

    path[0][0] = 1;
    Q.push(pair<int,int>({0,0}));

    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();

        for(int dir=0;dir<4;dir++){
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            if(nx <0 || ny<0 || nx>=N || ny>=M) continue;
            if(board[nx][ny] == '1' && path[nx][ny] == -1){
                path[nx][ny] = path[cur.x][cur.y] + 1;
                Q.push(pair<int,int>({nx,ny}));
            }
        }
        if(path[N-1][M-1] != -1 ) break;
    } 

    cout << path[N-1][M-1] <<endl;
}