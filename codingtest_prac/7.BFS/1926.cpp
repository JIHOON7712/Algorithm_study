#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

#define x first
#define y second

using namespace std;

int N=0;
int M=0;

int cnt =0;
int max_size = 0;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    cin >> N >> M;
    char visited[501][501] = {0,};  //2차원 배열 만들고 0으로 초기화
    int board[501][501];
    
    vector<int> size;

    for(int i =0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> board[i][j];
        }
    }

    queue<pair<int,int>> q;

    for(int a = 0;a<N;a++){
        for(int b=0;b<M;b++){
            if(board[a][b] == 1 && visited[a][b] != 1){
                visited[a][b] = 1;
                int s = 1;
                cnt++;
                q.push(pair<int,int> ({a,b}));
                while(!q.empty()){
                    pair<int,int> cur = q.front();  //큐 맨앞에 있는 원소를 반환받고
                    q.pop();    //삭제

                    for(int dir =0;dir<4;dir++){
                        int nx = cur.x + dx[dir];
                        int ny = cur.y + dy[dir];

                        if(nx<0 || nx >= N || ny <0 || ny>=M ) { continue; }
                        if(visited[nx][ny] ==1 || board[nx][ny] != 1) {continue;}
                        visited[nx][ny] = 1;
                        s++;
                        q.push(pair<int,int> ({nx,ny}));
                    }
                }
                size.push_back(s);
            }
        }
    }
    if(cnt >0){ max_size = *max_element(size.begin(),size.end());}
    else{ max_size = 0;}
    cout << cnt << " " << max_size << endl;
}