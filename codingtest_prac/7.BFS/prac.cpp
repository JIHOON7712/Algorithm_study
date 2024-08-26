#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<int> v;
queue<pair<int,int>> q;
string s;
int map[26][26];
int visited[26][26] = {0,};

int cnt = 0;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int N;

int main(int argc, char** argv)
{
    cin >> N;
    for(int i = 1;i<N+1;i++){
        cin >> s;
        for(int k =1;k<=N;k++){
            map[i][k] = int(s[k-1]-'0');
        }
    }

    for(int i =1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(map[i][j] == 1 && visited[i][j] == 0){
                q.push(make_pair(i,j));
                cnt = 0;
                while(!q.empty()){
                    pair<int,int> cur = q.front();
                    q.pop();
                    cnt++;
                    cout << cur.first <<' '<< cur.second << endl;
                    visited[cur.first][cur.second] = 1;
                    
                    for(int k=0;k<4;k++){
                        int ndx = cur.first +dx[i];
                        int ndy = cur.second + dy[i];

                        if(ndx <= 0 || ndy <= 0 || ndx > N|| ndy >N) continue;
                        if(map[ndx][ndy] == 1 && visited[ndx][ndy] != 1) {q.push(make_pair(ndx,ndy));}
                    }
                }
            }
            v.push_back(cnt);
        }
    }

    if(!v.empty()){
        cout << v.size() <<endl;
        sort(v.begin(),v.end());
        for(auto i = v.begin();i !=v.end(); i++){
            cout << *i << endl;
        }
    }
    else{
        cout << 0<<endl;
    }

   return 0;
}