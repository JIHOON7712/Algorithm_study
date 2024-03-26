#include<iostream>
#include<queue>

using namespace std;

#define MAX 1001

string input[MAX];
int matrix[MAX][MAX][2];

typedef struct miro{
    int x;
    int y;
    int wall;
}miro;

queue<miro> q;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int N,M; 

int main(void){
    cin >> N >> M;

    for(int i =0;i<N;i++){
        cin >> input[i];
    }

    matrix[0][0][0] = 1;
    q.push({0,0,0});

    while(!q.empty()){
        miro cur = q.front();
        q.pop();

        for(int k=0;k<4;k++){
            int nx = cur.x + dx[k];
            int ny = cur.y + dy[k];
            int wall = cur.wall;

            if(nx<0 || ny<0 || nx>=N || ny>=M) continue;
            if(input[nx][ny] == '0' && matrix[nx][ny][wall] == 0){
                matrix[nx][ny][wall] = matrix[cur.x][cur.y][wall] + 1;
                q.push(miro{nx,ny,wall});
            }
            else if(input[nx][ny] == '1' && wall == 0 && matrix[nx][ny][1] == 0){
                matrix[nx][ny][1] = matrix[cur.x][cur.y][0] + 1;
                q.push(miro{nx,ny,1});
            }
        }

        if(matrix[N-1][M-1][cur.wall] != 0){
            cout << matrix[N-1][M-1][cur.wall] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
