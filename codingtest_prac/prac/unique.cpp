#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
    v = {3,3,2,2,1,1};
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(auto i : v){
        cout << i;
    }
    cout << endl;
}
