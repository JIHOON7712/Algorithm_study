#include<iostream>
#include<queue>

using namespace std;

#define MAX 1001

string input[MAX];

queue<pair<int,int>> q;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int N,M; 

int min_t = -1;

int main(void){
    cin >> N >> M;

    for(int i =0;i<N;i++){
        cin >> input[i];
    }

    for(int i =0;i<N;i++){
        for(int j =0;j<M;j++){
            if(input[i][j] == '0'){
                q.push(pair<int,int>({i,j}));
            }
        }
    }

    bool flag = true;

    while(!q.empty() && flag == true){
        pair<int,int> ptr = q.front();
        q.pop();

        int matrix[MAX][MAX] = {0,};
        queue<pair<int,int>> q_matrix;

        q_matrix.push({0,0});
        matrix[0][0] = 1;
        while(!q_matrix.empty()){
            pair<int,int> cur = q_matrix.front();
            q_matrix.pop();

            for(int k=0;k<4;k++){
                int nx = cur.first + dx[k];
                int ny = cur.second + dy[k];

                if(nx<0 || ny<0 || nx>=N || ny>=M) continue;
                if(input[nx][ny] == '0' && matrix[nx][ny] == 0){
                    matrix[nx][ny] = matrix[cur.first][cur.second] + 1;
                    q_matrix.push(pair<int,int>({nx,ny}));
                }
                else if(input[nx][ny] == '1' && cur.first == ptr.first && cur.second == ptr.second){
                    matrix[nx][ny] = matrix[cur.first][cur.second] + 1;
                    q_matrix.push(pair<int,int>({nx,ny}));
                }
            }
        }

        if(matrix[N-1][M-1] != 0){
            if(min_t != -1){
                if(min_t<matrix[N-1][M-1]) min_t = matrix[N-1][M-1];
            }
            else{min_t = matrix[N-1][M-1]; }
        }
        else flag = false;
    }

    cout << min_t<< endl;
}
