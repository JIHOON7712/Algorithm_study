#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define MAX 15000002

vector<pair<int,int>> vec;
int day,pay;

int dp[MAX]={0,};
int main(void){
    int N;
    cin >> N;

    vec.push_back({0,0});

    for(int i =0;i<N;i++){
        cin >> day >> pay;
        vec.push_back({day,pay});
    }

    int curmax =0;

    for(int j = 1;j<=N;j++){
        curmax = max(curmax, dp[j]);
        if(j+vec[j].first<=N+1){
            dp[(j)+vec[j].first] = max(dp[(j)+vec[j].first],curmax+vec[j].second);
        }
        else{
            dp[N+1] = max(dp[N+1],curmax);
        }
    }  

    cout << dp[N+1] << endl;
}