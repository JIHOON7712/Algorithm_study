#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

#define MAX 26

using namespace std;

queue<pair<int,int>> q;
vector<int> vec;
string matrix[MAX];
int visited[MAX][MAX] = {0,};

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int N;

int main(void){
    cin >> N;
    for(int i = 0;i<N;i++){
        cin >> matrix[i];
    }

    int size = 0;
    for(int i = 0;i<N;i++){
        for(int j =0;j<N;j++){
            if(matrix[i][j] == '1' && visited[i][j] == 0){
                q.push(pair<int,int>({i,j}));
                visited[i][j] = 1;
                size = 1;

                while(!q.empty()){
                    pair<int,int> cur = q.front();
                    q.pop();

                    for(int k = 0; k< 4;k++){
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];

                        if(nx<0|| ny<0 || nx>=N || ny >= N){ continue; }
                        if(matrix[nx][ny] == '1' && visited[nx][ny] == 0){
                            q.push(pair<int,int>({nx,ny}));
                            visited[nx][ny] = 1;
                            size++;
                        }
                    }
                
                }
                vec.push_back(size);
            }
            
        }
    }
    sort(vec.begin(),vec.end());
    cout << vec.size() << endl;
    for(auto i = vec.begin();i != vec.end(); i++){
        cout<< *i <<endl;
    }
}