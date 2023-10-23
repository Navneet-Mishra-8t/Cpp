#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    int var = 1;
    for(int i=2;i<num+1;i++){
        var=var*i;
    }
    return var;
    
};

int main(){
    int n;
    cin>>n;

    cout<<"Factorial: "<<endl;
    cout<<factorial(n);

    return 0;
}
