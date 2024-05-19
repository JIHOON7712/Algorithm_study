#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int map[101][101] = {0,};
vector<int> inp;
queue<pair<int,int>> q;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int visited[101][101] = {0,};

int main(){
    int N = 0;  //행과 열의 크기
    int MAX_COUNT = 0;  //최대 안전 영역 개수

    cin >> N;
    for(int i =0 ; i < N;i++){
        for(int j = 0;j<N;j++){
            cin >> map[i][j];
            auto it = find(inp.begin(),inp.end(),map[i][j]);

            if(it == inp.end()){
                inp.push_back(map[i][j]);
            }
        }
    }

    while(!inp.empty()){
        int H = *(inp.end()-1);
        inp.pop_back();
        int count = 0;

        memset(visited,0,sizeof(visited));

        for(int i = 0;i<N;i++){
            for(int j = 0;j<N;j++){
                if(map[i][j] > H && visited[i][j] != 1){
                    q.push(pair<int,int>(i,j));
                    visited[i][j] = 1;
                    count++;
                }

                while(!q.empty()){
                    pair<int,int> cur = q.front();
                    q.pop();

                    for(int k =0;k<4;k++){
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];

                        if(nx <0 || ny < 0 || nx >= N || ny >= N) continue;
                        if(map[nx][ny] > H && visited[nx][ny] != 1){
                            q.push(pair<int,int>(nx,ny));
                            visited[nx][ny] = 1;
                        }
                    }
                }
            }
        }
        if(count > MAX_COUNT){
            MAX_COUNT = count;
        }
    }

    if(MAX_COUNT == 0) MAX_COUNT = 1;
    cout << MAX_COUNT << endl;
}