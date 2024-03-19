#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

#define MAX 101

queue<pair<int,int>> q;
vector<int> vec;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int board[MAX][MAX] = {0,};

int M,N,K;

int main(){
    cin >> M >> N >> K ;
    for(int i = 0; i<K;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2 ;
        for(int j = x1; j<x2;j++){
            for(int k = y1;k<y2;k++){
                board[j][k] = 1;
            }
        }
    }

    int s = 0;

    for(int b= 0; b < M;b++){
        for(int a = 0 ; a<N;a++){
            if(board[a][b] == 0){
                q.push(pair<int,int>({a,b}));
                s = 1;
                board[a][b] = -1;
                while(!q.empty()){
                    pair<int,int> cur = q.front();
                    q.pop();
                    for(int c =0;c<4;c++){
                        int nx = cur.first + dx[c];
                        int ny = cur.second + dy[c];

                        if(nx<0 || ny <0 || nx >=N || ny >= M) continue;
                        if(board[nx][ny] == 0){
                            s++;
                            board[nx][ny] = -1;
                            q.push(pair<int,int>({nx,ny}));
                        }
                    }
                }
                vec.push_back(s);
            }
        }
    }

    cout << vec.size() << endl;
    sort(vec.begin(),vec.end());

    for(auto i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}