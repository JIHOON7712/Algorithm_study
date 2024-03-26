#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> vec;
int inp;
int n;

int main(){
    ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
    
    cin >> n;

    for(int i =0;i<n;i++){
        cin>> inp;
        vec.push_back(inp);
    }

    sort(vec.begin(),vec.end());
    for(vector<int>::iterator i = vec.begin(); i != vec.end(); i++){
        cout << *i << '\n';
    }
}