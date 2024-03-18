#include<iostream>
#include<queue>

using namespace std;

#define MAX 51
#define x first
#define y second

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

queue<pair<int,int>> Q;

void bfs(void){
    int board[MAX][MAX] ={0,};
    bool visited[MAX][MAX]= {false,};

    int N,M,count;
    cin >> N >> M >> count;
    for(int i = 0;i<count;i++){
        int a,b;
        cin >>a >>b;
        board[a][b] = 1;
    }
    int bug = 0;
    for(int i =0;i<N;i++){
        for(int j=0;j<M;j++){
            if(board[i][j] ==1 && visited[i][j] == false){
                bug++;
                Q.push(pair<int,int>({i,j}));
                while(!Q.empty()){
                    pair<int,int> cur = Q.front();
                    Q.pop();

                    visited[cur.x][cur.y] = true;
                    for(int h =0;h<4;h++){
                        int nx = cur.x + dx[h];
                        int ny = cur.y + dy[h];

                        if(nx < 0 || ny <0 || nx>=N || ny >= M) { continue;}
                        if(board[nx][ny] ==1 && visited[nx][ny] ==false){
                            Q.push(pair<int,int>({nx,ny}));
                        }
                    }

                }
            }
        }
    }
    cout << bug << endl;
}

int main(){
    int time = 0;
    cin >> time ;

    while(time >0){
        bfs();
        time--;
    }
    return 0;
}