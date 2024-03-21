#include<iostream>
using namespace std;

int main(void){
    long long n[1000001] = {0LL};

    n[1] = 1;
    n[2] = 2;
    n[3] = 4;

    int inp,times,ptr;
    ptr=3;
    cin >> times;
    

    for(int j=0;j<times;j++){
        cin >> inp;
        if(inp > ptr){
            while(ptr < inp){
                ptr++;
                n[ptr] = (n[ptr-1]+n[ptr-2]+n[ptr-3])%1000000009;
            }
        }
        if(n[inp] >= 1000000009) cout<< n[inp] % 1000000009<< endl;
        else cout << n[inp] << endl;
    }
}