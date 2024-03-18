#include<iostream>
#include<queue>
#include<vector>

using namespace std;

#define MAX 51
#define x first
#define y second

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

vector<pair<int,int>> v;
queue<pair<int,int>> tmp;

void bfs(void){
    int N,M,count;
    cin >> N >> M >> count;
    for(int i = 0;i<count;i++){
        int a,b;
        cin >>a >>b;
        v.push_back(pair<int,int>({a,b}));
    }

    int bug = 0;
    while(!v.empty()){

        pair<int,int> cur = v.front();
        v.erase(v.begin());
        bug++;
        tmp.push(cur);
            while(!tmp.empty()){
                pair<int,int> cur = tmp.front();
                tmp.pop();

                for(int h =0;h<4;h++){
                    int nx = cur.x + dx[h];
                    int ny = cur.y + dy[h];

                    if(nx < 0 || ny <0 || nx>=N || ny >= M) { continue;}
                    for(auto i = v.begin();i!=v.end();i++){
                        if((*i).x == nx && (*i).y == ny ){ 
                            tmp.push(*i);
                            v.erase(i);
                            break;
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