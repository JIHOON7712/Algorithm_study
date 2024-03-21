#include<iostream>

using namespace std;

int a,b,c;
int result=1;

int calc(int a,int b,int c){
    if(b==1){
        return ((a%c) * (a%c))%c;
    }
    else{
        return ((calc(a,b-1,c)%c) * (a%c))%c;
    }
}

int main(){
    cin >> a >> b >> c;
    
    result = calc(a,b,c);

    cout << result << endl;
}