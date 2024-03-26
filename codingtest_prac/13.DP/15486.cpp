#include<iostream>
#include<vector>

using namespace std;

vector<pair<int,int>> vec;
int day,pay;

int main(void){
    int N;
    cin >> N;

    for(int i =0;i<N;i++){
        cin >> day >> pay;
        vec.push_back({day,pay});
    }

    
}
