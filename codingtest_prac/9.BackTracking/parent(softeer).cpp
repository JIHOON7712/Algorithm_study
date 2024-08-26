#include<iostream>
#include<vector>

using namespace std;

int N =0;
int M =0;

int map[21][21];

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

vector<pair<int,int> > fr;
int sum = 0;

int max_sum = 0;

void dfs(int time,int fr_turn){
    if(time == 3){
        if(sum > max_sum){
            max_sum = sum;
        }
        return;
    }
    for(int i = 0;i<4 ;i++){
        int ndx = fr[fr_turn].first + dx[i];
        int ndy = fr[fr_turn].second +dy[i];

        if(ndx <0 || ndy <0|| ndx >= N || ndy >= N) continue;
        int tmp = map[ndx][ndy];
        sum = sum + map[ndx][ndy];
        map[ndx][ndy]= 0;
        pair<int,int> temp = fr[fr_turn];
        fr[fr_turn] = make_pair(ndx,ndy);
        if(fr_turn == M-1){
            dfs(time+1,0);
        }
        else{
            dfs(time,fr_turn+1);
        }
        fr[fr_turn] = temp;
        map[ndx][ndy]= tmp;
        sum = sum - map[ndx][ndy];
    }
    
}

int main(int argc, char** argv)
{
    cin >> N >> M;

    for(int i =0 ; i<N; i++){
        for(int j=0;j<N;j++){
            cin >> map[i][j];
        }
    }

    for(int k = 0;k<M; k++){
        int x,y;
        cin >> x >> y;
        x= x-1;
        y= y-1;
        fr.push_back(make_pair(x,y));
        if(map[x][y] != 0){
            sum = sum + map[x][y];
            map[x][y] = 0;
        }
    }

    dfs(0,0);
    cout << max_sum;
    return 0;
}