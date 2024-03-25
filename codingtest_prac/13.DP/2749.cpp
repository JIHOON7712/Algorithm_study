#include<iostream>
using namespace std;

int main(){
    long long n[91] = {0,};
    n[0] = 0;
    n[1] = 1;

    int inp;
    cin >> inp;
    if(inp>=2){ 
        for(int i =2 ;i<=inp;i++){
            n[i] = n[i-1] + n[i-2] ;
        }
    }
    cout << n[inp] << endl;

}