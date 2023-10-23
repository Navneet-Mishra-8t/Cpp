#include <bits/stdc++.h>

using namespace std;
//4!=1*2*3*4=24

void factorial(int num){
    int facto=1;
    for(int i=1;i<=num;i++){
        facto *= i;
    }

    cout<<facto<<endl;
}
//fibonacci to 10
void fibonacci(int num){
    int fst=0;
    int snd=1;
    cout<<fst<<" "<<snd<<" ";

    for(int i=2;i<=num;i++){
        int fin=fst+snd;
        cout<<fin<<" ";
        int var=snd;
        fst=snd;
        snd=fin;
    }
    
};
//5
bool prime_check(int num){
    int i=0;
    for(i=2;i<num;i++){
        if(num%i==0){
             break;
        }
    }
    if(i==num){
        return true;
    }else{
        return false;
    }
};

void print_prime(int num){
    for(int i=2;i<num;i++){
        if(prime_check(i)==true){
            cout<<i<<" ";
            continue;
        }
    }
};

int main(){
    int n;
    cin>>n;

    print_prime(n);

    return 0;
}
