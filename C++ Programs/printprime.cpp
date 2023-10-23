#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    int j;
    for(j=2;j<num;j++){
        if(num%j==0){
            return false;
            break;
        }
    }
    if(j==num){
    return true;
    }
};

int main(){
    int n,m;
    cin>>n>>m;

    for(int i = n; i < m; i++){
        if(isPrime(i)==false){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}
