#include<iostream>
using namespace std;

long long calc(int a,int b,int c){
    if(b==0){
        return 1;
    }
    else{
        long long temp = calc(a,b/2,c);
        temp = temp * temp%c;
        if(b % 2 == 0){
            return temp;
        }
        else{
            return (temp * a) %c;
        }
    }
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << calc(a,b,c) << endl;
}