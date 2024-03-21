#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

#define MAX 101

int box[MAX][MAX][MAX];

int N,M,H;

int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

queue<pair<pair<int,int>,int>> q;

int max_times = 0 ;

void tomato(void){
    while(!q.empty()){
        pair<pair<int,int>,int> cur = q.front();
        q.pop();

        for(int i = 0;i<6;i++){
            int nz = cur.first.first + dz[i];
            int nx = cur.first.second + dx[i];
            int ny = cur.second + dy[i];

            if(nz<0 || nx<0 || ny<0 || nz>=H || nx>= N || ny>= M){
                continue;
            } 
            if(box[nz][nx][ny] == 0){
                box[nz][nx][ny] = box[cur.first.first][cur.first.second][cur.second] + 1;
                if(box[nz][nx][ny] > max_times) max_times = box[nz][nx][ny];
                q.push(pair<pair<int,int>,int>({{nz,nx},ny}));
            }
        }
    }    
}

int main(){
    cin >> N >> M >> H ;
    for(int i =0 ;i<H;i++){
        for(int j=0 ;j<N;j++){
            for(int k=0;k<M;k++){
                cin >> box[i][j][k];

                if(box[i][j][k] == 1) q.push(pair<pair<int,int>,int>({{i,j},k}));
            }
        }
    }

    tomato();

    for(int i =0 ;i<H;i++){
        for(int j=0 ;j<N;j++){
            for(int k=0;k<M;k++){
                if(box[i][j][k] == 0) cout<< -1<<endl;
                return 0;
            }
        }
    }

    cout << max_times-1 <<endl;
}