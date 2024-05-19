#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v = {3,2,1};
    sort(v.begin(),v.end());

    do{
        for(auto i : v){
            cout << i;
        }
        cout << endl;
    } while(next_permutation(v.begin(),v.end()));
}