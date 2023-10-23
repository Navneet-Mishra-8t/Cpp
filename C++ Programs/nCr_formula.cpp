#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    int var = 1;
    for(int i=2;i<=num;i++){
        var = var*i;
    }
    return var;
};


int main(){
    int n,r;
    cin>>n>>r;

    int nr = (n-r);

    int answer = factorial(n)/(factorial(nr)*factorial(r));
    cout<<answer;

    return 0;

}
